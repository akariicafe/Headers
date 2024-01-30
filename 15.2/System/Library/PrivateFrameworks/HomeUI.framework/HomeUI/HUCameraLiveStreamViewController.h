@class HUCameraView, NSString, HFCameraLiveStreamController;
@protocol HFCameraLiveStreamControllerDelegate;

@interface HUCameraLiveStreamViewController : UIViewController <HFCameraLiveStreamControllerDelegate>

@property (retain, nonatomic) HFCameraLiveStreamController *liveStreamController;
@property (retain, nonatomic) HUCameraView *cameraView;
@property (weak, nonatomic) id<HFCameraLiveStreamControllerDelegate> liveStreamControllerDelegate;
@property (nonatomic) BOOL shouldRespectAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
