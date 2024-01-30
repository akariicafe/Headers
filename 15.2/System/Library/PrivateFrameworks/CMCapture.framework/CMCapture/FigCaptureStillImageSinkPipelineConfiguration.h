@class NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {
    int _clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    BOOL _stillImageISPChromaNoiseReductionEnabled;
    BOOL _stereoFusionSupported;
    BOOL _isIrisSupported;
    BOOL _hdrSupported;
    BOOL _gnrHDRSupported;
}

- (void)dealloc;

@end
