@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    BOOL _aggdIsPhotoFormat;
    BOOL _clientIsCameraOrDerivative;
    BOOL _aggdIsTimeLapse;
    BOOL _captureTimePhotosCurationSupported;
    long long _lastCaptureRequestTime;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;
+ (id)_inferenceTypesForClientMetadata;

- (void)_reportCoreAnalyticsDataWithRequestedStillImageSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1 sbuf:(struct opaqueCMSampleBuffer { } *)a2;
- (BOOL)aggdIsTimeLapse;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (void)dealloc;
- (void)_attachPrivateClientMetadataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)captureTimePhotosCurationSupported;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (void)_reportAggdDataWithRequestedStillImageSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1 sbuf:(struct opaqueCMSampleBuffer { } *)a2;
- (id)initWithSinkID:(id)a0;
- (id)_newFilteredDetectedObjectsInfoFromDetectedObjectsInfo:(id)a0;
- (BOOL)clientIsCameraOrDerivative;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (BOOL)aggdIsPhotoFormat;
- (void)setAggdIsTimeLapse:(BOOL)a0;
- (void)setAggdIsPhotoFormat:(BOOL)a0;

@end
