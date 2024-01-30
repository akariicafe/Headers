@class NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding> {
    int _clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    BOOL _stillImageISPChromaNoiseReductionEnabled;
    BOOL _stereoFusionSupported;
    BOOL _isIrisSupported;
    BOOL _hdrSupported;
    BOOL _gnrHDRSupported;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
