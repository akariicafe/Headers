@class NSData, NSLock, NSURL, AVAssetWriter, AVAssetWriterInputMetadataAdaptor, WriterReorderQ, NSDictionary, JFXDepthCompressor, NSMutableArray, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol JFXVideoWriterDelegate;

@interface JFXVideoWriter : NSObject {
    AVAssetWriter *_videoAssetWriter;
    AVAssetWriterInput *_videoAssetWriterInput;
    AVAssetWriterInput *_audioAssetWriterInput;
    struct opaqueCMFormatDescription { } *_audioFormatHint;
    AVAssetWriter *_metadataAssetWriter;
    AVAssetWriterInput *_depthAssetWriterInput;
    AVAssetWriterInput *_compressedDepthAssetWriterInput;
    AVAssetWriterInput *_exposureMetadataAssetWriterInput;
    AVAssetWriterInput *_faceMetadataAssetWriterInput;
    AVAssetWriterInput *_JFXARMetadataAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthAdaptor;
    AVAssetWriterInputMetadataAdaptor *_exposureMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_faceMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_JFXARMetadataMetadataAdaptor;
    BOOL _wroteFirstAudioSample;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sessionStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sessionVideoEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _sessionMetadataEndTime;
    _Atomic BOOL _preparingWriter;
    _Atomic BOOL _finishingWritingMovie;
    NSLock *_finishingLock;
    WriterReorderQ *_reorderQ;
    NSMutableArray *_audioBufferQ;
}

@property (retain, nonatomic) NSURL *folderURL;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (copy, nonatomic) NSDictionary *videoOutputSettings;
@property (copy, nonatomic) NSDictionary *audioOutputSettings;
@property (retain, nonatomic) JFXDepthCompressor *depthCompressor;
@property (copy, nonatomic) NSDictionary *depthBGRAPixelBufferAttributes;
@property (nonatomic) unsigned long long signPostID;
@property (readonly, nonatomic) BOOL wroteSessionStartTime;
@property (nonatomic) BOOL storeFaceMetadata;
@property (nonatomic) BOOL storeDepthDataAsVideoTrack;
@property (nonatomic) struct { int width; int height; } depthDimensions;
@property (retain, nonatomic) NSData *animojiMetadata;
@property (weak, nonatomic) id<JFXVideoWriterDelegate> delegate;
@property (nonatomic) BOOL trackOutOfOrderVideoBuffers;
@property (nonatomic) int depthCodecType;

+ (void)META_metadataForVideo:(id)a0 completion:(id /* block */)a1;
+ (id)META_ARMetadataTrackForAsset:(id)a0;
+ (id)META_JFXARMetadataIdentifier;
+ (id)JFX_funcamCameraPositionMetadataIdentifier;
+ (id)JFX_funcamCaptureInterfaceOrientationMetadataIdentifier;
+ (id)JFX_animojiMetadataIdentifier;
+ (id)META_metadataAssetTrackFromAsset:(id)a0 metadataIdentifier:(id)a1;
+ (id)JFX_faceAnchorMetadataIdentifier;

- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)writeCameraFrameSet:(id)a0;
- (void)writeAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithFolderURL:(id)a0 videoOutputSettings:(id)a1 audioOutputSettings:(id)a2 audioFormatHint:(const struct opaqueCMFormatDescription { } *)a3;
- (BOOL)startWriterWithVideoTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (BOOL)JFX_writerCanBegin:(id *)a0;
- (BOOL)JFX_setupVideoWriterWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (BOOL)JFX_setupMetadataWriterWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (void)JFX_removeFileAtURL:(id)a0;
- (void)JFX_startSessionAtSourceTime_noLock:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)JFX_writeBuffer:(struct opaqueCMSampleBuffer { } *)a0 sampleType:(int)a1 arMetadata:(id)a2;
- (void)JFX_writeDepthBufferForAVDepthData:(id)a0 withTimingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1;
- (void)JFX_writeFaceMetadata:(id)a0 withTimingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1;
- (void)JFX_writeBuffer:(struct opaqueCMSampleBuffer { } *)a0 sampleType:(int)a1;
- (BOOL)JFX_setupVideoOutput:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (BOOL)JFX_setupAudioOutput:(id *)a0;
- (id)JFX_fileLevelMetadata;
- (BOOL)JFX_setupDepthOutputWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (BOOL)JFX_setupCompressedDepthOutputWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 error:(id *)a1;
- (BOOL)JFX_setupFaceMetadataOutput:(id *)a0;
- (BOOL)JFX_setupJFXARMetadataTrack:(id *)a0;
- (BOOL)JFX_setupAutoExposureMetadataOutput:(id *)a0;
- (void)JFX_drainQueuedAudioBufferBeforeSessionStart_noLock;
- (void)JFX_queueAudioBufferBeforeSessionStart:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)JFX_writeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 assetWriterInput:(id)a1 sampleType:(int)a2 depthAdaptor:(id)a3;
- (void)JFX_writeAutoExposureMetadata:(struct opaqueCMSampleBuffer { } *)a0;
- (void)JFX_writeJFXARMetadata:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct __CVBuffer { } *)JFX_copyDepthBufferAsBGRA:(struct __CVBuffer { } *)a0;
- (void)JFX_writeFaceDetectMetadata:(id)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)JFX_writeDepthData:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1;

@end
