@class VideoAttributes, NSString, NSMutableDictionary, VCMomentsHistoryBuffer, NSObject, NSMutableArray;
@protocol VCMovieWriterProtocol, OS_dispatch_queue;

@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate> {
    NSMutableDictionary *_writers;
    NSObject<VCMovieWriterProtocol> *_writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_momentsQueue;
    VCMomentsHistoryBuffer *_frameBuffer;
    VCMomentsHistoryBuffer *_localAudioBuffer;
    VCMomentsHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_stillImageURLs;
    struct __CVPixelBufferPool { } *_bufferPool;
    struct CGSize { double width; double height; } _bufferPoolResolution;
    struct __CVPixelBufferPool { } *_copyPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct OpaqueVTPixelTransferSession { } *_copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    BOOL _resize;
    BOOL _isFirstFrame;
    int videoPayload;
    struct __CFAllocator { } *_audioSampleBufferAllocator;
    BOOL _enableLocalVideoRecording;
}

@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setFrameRate:(float)a0;
- (void)dealloc;
- (void)cleanupTransferSession;
- (void)updateAudioBuffer:(id)a0 WithSample:(struct opaqueCMSampleBuffer { } *)a1 timestamp:(unsigned int)a2;
- (void)updateCaptureSizesWithFirstFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (struct __CVBuffer { } *)copyBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)updateVideoBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2 timestamp:(unsigned int)a3;
- (void)updateResizeFlag;
- (BOOL)writeToFileWithTimestamp:(unsigned int)a0 transactionID:(id)a1 URL:(id *)a2 imageType:(int)a3;
- (id)getFilePathWithTransactionID:(id)a0 type:(unsigned char)a1;
- (void)registerDirectoryWithFilePath:(id)a0;
- (void)setCompeletionHandler:(id /* block */)a0 forTransactionID:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })setupStillImageWithTimestamp:(unsigned int)a0 transactionID:(id)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 cameraStatusBit:(char *)a3 imageType:(int)a4;
- (void)setupWriterWithTransactionID:(id)a0 filePath:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 cameraStatusBit:(unsigned char)a4;
- (unsigned char)_mediaTypeForBuffer:(id)a0;
- (id)_getActiveWriters;
- (void)handlePendingRequestsWithSourceURL:(id)a0 error:(id)a1;
- (void)appendSampleWithWriter:(id)a0 buffer:(id)a1 sample:(struct opaqueCMSampleBuffer { } *)a2;
- (void)flushHistoryBuffers;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cameraStatusBit:(unsigned char)a1;
- (BOOL)writeToLivePhotoToFileWithFrame:(struct __CVBuffer { } *)a0 transactionID:(id)a1 URL:(id *)a2 imageType:(int)a3 cameraStatusBits:(unsigned char)a4;
- (struct CGSize { double x0; double x1; })calculateVisibleAreaWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cameraStatusBit:(unsigned char)a1;
- (int)rewriteMovieMetadataWithURL:(id)a0 transactionID:(id)a1;
- (void)handleSinglePendingRequestWithTransactionID:(id)a0 sourceURL:(id)a1;
- (void)handlePendingRequestWithError:(id)a0;
- (void)handlePendingRequestSuccessWithSourceURL:(id)a0;
- (void)historyBuffer:(id)a0 didDequeueSample:(struct opaqueCMSampleBuffer { } *)a1 timestamp:(unsigned int)a2;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList { } *)a0 timestamp:(unsigned int)a1;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList { } *)a0 timestamp:(unsigned int)a1;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cameraStatusBits:(unsigned char)a1 timestamp:(unsigned int)a2;
- (void)updateRemoteScreenAttributes:(id)a0;
- (void)getPhotoWithTransactionID:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)getLivePhotoWithTransactionID:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)startRecording:(unsigned char)a0 transactionID:(id)a1 timestamp:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (void)endRecording:(id)a0 timestamp:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)cleanupActiveRequests;
- (void)cancelRequestWithTransactionID:(id)a0;

@end
