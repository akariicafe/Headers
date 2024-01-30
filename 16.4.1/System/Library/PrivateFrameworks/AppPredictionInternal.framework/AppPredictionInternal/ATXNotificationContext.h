@class NSString, NSDictionary, NSDate;

@interface ATXNotificationContext : NSObject

@property (nonatomic) double notificationsReceived;
@property (nonatomic) double notificationsEngaged;
@property (nonatomic) double notificationsIgnored;
@property (nonatomic) double notificationsCleared;
@property (nonatomic) double notificationsDefAction;
@property (nonatomic) double notificationsOrb;
@property (nonatomic) double notificationsSuppAction;
@property (nonatomic) double notificationsTapCoa;
@property (nonatomic) double appLaunchPopularity;
@property (nonatomic) double totalLaunches;
@property (nonatomic) long long motion;
@property (nonatomic) BOOL stationary;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) unsigned long long visits;
@property (copy, nonatomic) NSDictionary *contentFeatures;
@property (retain, nonatomic) NSDate *activatedTime;
@property (retain, nonatomic) NSDate *unlockedTime;

- (id)pbmsg;
- (id)serializedToMetadata;
- (id)initFromMetadata:(id)a0;
- (void).cxx_destruct;
- (id)contentFeaturesToPBContentFeatures;

@end
