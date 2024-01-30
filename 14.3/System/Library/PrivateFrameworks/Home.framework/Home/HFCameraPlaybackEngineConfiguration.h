@class NSUUID, HMCameraProfile, HFCameraPlaybackPosition, HMHome;
@protocol HFCameraLiveStreamControlling, HFCameraClipScrubbing;

@interface HFCameraPlaybackEngineConfiguration : NSObject

@property (copy, nonatomic) id /* block */ clipPlayerBuilder;
@property (retain, nonatomic) id<HFCameraLiveStreamControlling> liveStreamController;
@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSUUID *notificationClipUUID;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (weak, nonatomic) id<HFCameraClipScrubbing> clipScrubber;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0 cameraProfile:(id)a1;
- (void)assertConfigurationIsValid;

@end
