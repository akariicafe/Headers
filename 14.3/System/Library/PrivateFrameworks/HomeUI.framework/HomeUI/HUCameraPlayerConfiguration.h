@class NSUUID, HMCameraProfile, NSDate, HMHome;

@interface HUCameraPlayerConfiguration : NSObject

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) long long scrubberType;
@property (readonly, nonatomic) NSUUID *notificationUUID;
@property (readonly, nonatomic) NSUUID *clipUUID;
@property (retain, nonatomic) NSDate *startingPlaybackDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHome:(id)a0 cameraProfile:(id)a1 scrubberType:(long long)a2 notificationUUID:(id)a3 clipUUID:(id)a4;
- (BOOL)isConfiguredForLiveStream;

@end
