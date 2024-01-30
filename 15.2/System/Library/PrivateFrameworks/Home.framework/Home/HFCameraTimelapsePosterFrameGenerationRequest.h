@class HFCameraImageGenerator, HMCameraClip;

@interface HFCameraTimelapsePosterFrameGenerationRequest : NSObject

@property (retain, nonatomic) HMCameraClip *clip;
@property (nonatomic) double timelapseOffset;
@property (retain, nonatomic) HFCameraImageGenerator *imageGenerator;

- (void).cxx_destruct;

@end
