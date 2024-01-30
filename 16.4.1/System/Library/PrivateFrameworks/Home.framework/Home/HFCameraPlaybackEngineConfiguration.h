@class NSUUID, HMCameraProfile, HFCameraPlaybackPosition, HMHome;
@protocol HFCameraClipScrubbing;

@interface HFCameraPlaybackEngineConfiguration : NSObject

@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSUUID *notificationClipUUID;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (weak, nonatomic) id<HFCameraClipScrubbing> clipScrubber;

- (void).cxx_destruct;
- (void)assertConfigurationIsValid;
- (id)initWithHome:(id)a0 cameraProfile:(id)a1;

@end
