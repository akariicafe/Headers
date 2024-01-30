@class NSUUID, HMCameraProfile, NSDate, HMHome;

@interface HUCameraPlayerConfiguration : NSObject

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) NSUUID *notificationUUID;
@property (readonly, nonatomic) NSUUID *clipUUID;
@property (retain, nonatomic) NSDate *startingPlaybackDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 cameraProfile:(id)a1 notificationUUID:(id)a2 clipUUID:(id)a3;
- (BOOL)isConfiguredForLiveStream;

@end
