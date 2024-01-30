@interface SHMusicSubscriptionStatus : NSObject

@property (readonly, nonatomic) long long appleMusicSubscriptionStatus;
@property (readonly, nonatomic) long long shazamMusicSubscriptionStatus;
@property (readonly, nonatomic) BOOL hasActiveAppleMusicSubscription;

- (id)initWithSubscriptionStatus:(long long)a0;

@end
