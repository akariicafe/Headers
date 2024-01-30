@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration

@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSDictionary *stillImageColorInfoForFramesOriginatingFromVideoStream;
@property (nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;
@property (nonatomic) BOOL stereoFusionSupported;
@property (nonatomic) BOOL isIrisSupported;
@property (nonatomic) BOOL hdrSupported;
@property (nonatomic) BOOL gnrHDRSupported;

- (void)dealloc;

@end
