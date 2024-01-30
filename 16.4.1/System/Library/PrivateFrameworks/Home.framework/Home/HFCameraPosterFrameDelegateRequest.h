@class NSNumber, HMCameraClip;
@protocol HFCameraPosterFrameDelegate;

@interface HFCameraPosterFrameDelegateRequest : NSObject

@property (retain, nonatomic) NSNumber *offsetNumber;
@property (retain, nonatomic) HMCameraClip *highQualityClip;
@property (retain, nonatomic) HMCameraClip *timelapseClip;
@property (weak, nonatomic) id<HFCameraPosterFrameDelegate> delegate;

- (void).cxx_destruct;

@end
