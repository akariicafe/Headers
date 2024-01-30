@class NSDate, AVOfflineVideoStabilizer, NSArray, NSString, AVAssetWriter, NSObject, NSMutableSet, CLLocation, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol>

@property (readonly, nonatomic) NSArray *_frameFilePaths;
@property (readonly, nonatomic) NSArray *_visMetadataFilePaths;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_readingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_decodeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_pixelTransferQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFrameGetter;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFileReader;
@property (readonly, nonatomic) struct __CFArray { } *_frameList;
@property (readonly, nonatomic) NSDate *_movieCreationDate;
@property (readonly, nonatomic) CLLocation *_movieCreationLocation;
@property (readonly, nonatomic) NSString *_movieOutputPath;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _movieTransform;
@property (readonly, nonatomic) long long _movieFramesPerSecond;
@property (readonly, nonatomic) BOOL _preferHEVC;
@property (readonly, nonatomic) AVOfflineVideoStabilizer *_stabilizer;
@property (readonly, nonatomic) AVAssetWriter *_writer;
@property (readonly, nonatomic) AVAssetWriterInput *_videoInput;
@property (readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (readonly, nonatomic) long long _frameCountWrittenToMovie;
@property (readonly, nonatomic) long long _nextSourceFrameIndex;
@property (readonly, nonatomic) long long _nextMetadataFrameIndex;
@property (readonly, nonatomic) long long _firstFrameIndex;
@property (readonly, nonatomic) struct __CVBuffer { } *_stashedSourceFrame;
@property (readonly, nonatomic) NSMutableSet *_badFrameSet;
@property (readonly, nonatomic) NSMutableSet *_badMetadataSet;
@property (readonly, nonatomic) long long _badMetadataErrorThreshold;
@property (readonly, nonatomic) struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
@property (readonly, nonatomic) unsigned long long _frameLoadMode;
@property (readonly, copy, nonatomic) id /* block */ _completion;
@property (readonly, nonatomic) void *_powerAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (struct CGSize { double x0; double x1; })_desiredOutputSizeForSourcePixelBuffer:(struct __CVBuffer { } *)a0;

- (void)_reset;
- (void)_cleanup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copySourceStabilizationMetadataForFrameNumber:(long long)a0 outputSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 stabilizer:(id)a2;
- (struct __CVBuffer { } *)copySourcePixelBufferForFrameNumber:(long long)a0 outputSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 stabilizer:(id)a2;
- (void)writeMovieFromImageFiles:(id)a0 visMetadataFiles:(id)a1 startDate:(id)a2 location:(id)a3 outputPath:(id)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 framesPerSecond:(long long)a6 preferHEVC:(BOOL)a7 completionHandler:(id /* block */)a8;
- (void)_startAsyncDecoding;
- (int)_copySourcePixelBufferForNextFrame:(struct __CVBuffer **)a0 skipBadFrames:(BOOL)a1;
- (int)_startWritingWithOutputPath:(id)a0 width:(long long)a1 height:(long long)a2 videoFormatDescription:(struct opaqueCMFormatDescription { } *)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 framesPerSecond:(long long)a5 frameCount:(long long)a6 preferHEVC:(BOOL)a7 visMetadataCount:(long long)a8 videoMetadata:(id)a9;
- (void)_writeMovieAsynchronously;
- (struct __CVBuffer { } *)_decodeFirstFrameAgain;
- (struct __CVBuffer { } *)_cropPixelBufferIfNeeded:(struct __CVBuffer { } *)a0;
- (int)_copyNextSampleBufferFromStabilizer:(struct opaqueCMSampleBuffer **)a0;
- (BOOL)_appendPixelBufferToMovie:(struct __CVBuffer { } *)a0;
- (void)_finishMovieWithRestartUnstabilized;
- (void)_finishMovieWithFailure;
- (void)_requestNextFrameReadDecode;
- (void)_finishMovieWithCompletionHandler:(id /* block */)a0;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)a0;
- (void)_restartUnstabilized;

@end
