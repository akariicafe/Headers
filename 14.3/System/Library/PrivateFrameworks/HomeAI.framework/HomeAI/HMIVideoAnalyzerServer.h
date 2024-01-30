@class HMIVideoFrameAnalyzer, NSObject, HMIVideoDecoder, HMIVideoPackageAnalyzer, HMIVideoEncoder, HMIVideoTimeline, HMIVideoCommandBuffer, HMIVideoEventBuffer, HMIVideoAnalyzerScheduler, NSString, HMIVideoFrameSampler, NSData, HMIVideoAssetWriter, HMIVideoFrameSelector;
@protocol OS_dispatch_queue;

@interface HMIVideoAnalyzerServer : HMIVideoAnalyzer <HMFLogging, HMIVideoCommandBufferDelegate, HMIVideoDecoderDelegate, HMIVideoEncoderDelegate, HMIVideoFrameSelectorDelegate, HMIVideoFrameAnalyzerDelegate, HMIVideoAssetWriterDelegate, HMIVideoFrameSamplerDelegate, HMIVideoPackageAnalyzerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMIVideoCommandBuffer *_commandBuffer;
    HMIVideoDecoder *_decoder;
    HMIVideoFrameSampler *_frameThumbnailSampler;
    BOOL _encode;
    HMIVideoEncoder *_encoder;
    HMIVideoFrameSelector *_frameSelector;
    HMIVideoFrameAnalyzer *_frameAnalyzer;
    HMIVideoAssetWriter *_assetWriter;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentDTS;
    HMIVideoEventBuffer *_frameAnalyzerResultBuffer;
    HMIVideoEventBuffer *_thumbnailBuffer;
    NSData *_initializationSegment;
    HMIVideoEventBuffer *_dynamicConfigurationBuffer;
    HMIVideoPackageAnalyzer *_packageAnalyzer;
    BOOL _failed;
    BOOL _cancelled;
    HMIVideoAnalyzerScheduler *_scheduler;
    HMIVideoTimeline *_timeline;
    double _analysisFPS;
    long long _numDecodedSamples;
    long long _numDidAnalyzeFrames;
    long long _numDidAnalyzeFragments;
    BOOL _monitored;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)cancel;
- (void)finish;
- (double)delay;
- (void).cxx_destruct;
- (void)flushAsync;
- (void)flush;
- (id)stateDescription;
- (unsigned long long)status;
- (void)_notifyDelegateDidFailWithError:(id)a0;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1;
- (void)setAnalysisFPS:(double)a0;
- (void)encoder:(id)a0 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)encoder:(id)a0 didFailWithError:(id)a1;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)frameAnalyzer:(id)a0 didAnalyzeFrame:(id)a1 error:(id)a2;
- (BOOL)monitored;
- (void)setMonitored:(BOOL)a0;
- (void)buffer:(id)a0 willHandleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)bufferWillFlush:(id)a0;
- (void)bufferWillFinish:(id)a0;
- (void)decoder:(id)a0 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)decoder:(id)a0 didFailWithError:(id)a1;
- (void)assetWriter:(id)a0 didOutputInitializationSegment:(id)a1;
- (void)assetWriter:(id)a0 didOutputSeparableSegment:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)assetWriter:(id)a0 didFailWithError:(id)a1;
- (void)frameSelector:(id)a0 didSelectFrame:(struct opaqueCMSampleBuffer { } *)a1 detections:(id)a2;
- (void)handleAssetData:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMessageWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_ensureAssetWriterForFragment:(id)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 errorHandler:(id /* block */)a1;
- (void)_handleDecodedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_ensureEncoderForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)dynamicConfigurationForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_notifyDelegateDidAnalyzeFrame:(id)a0;
- (void)_notifyDelegateDidAnalyzeFragment:(id)a0;
- (void)_produceResult:(SEL)a0 withArguments:(id)a1;

@end
