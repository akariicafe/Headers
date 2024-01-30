@class NSString;

@interface PLBatteryBreakdownNotificationInfo : NSObject

@property (retain) NSString *bundleID;
@property BOOL isFirstParty;
@property int notificationType;
@property int bgWakingCount;
@property double bgWakingNSEDuration;
@property int fgWakingCount;
@property double fgWakingNSEDuration;
@property int nonWakingCount;
@property double nonWakingNSEDuration;
@property int localCount;

+ (double)representativeDisplayPower;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;
- (double)activeEnergy;
- (double)baseEnergy;
- (double)displayEnergy;
- (double)calculateActiveEnergyForNSEDuration:(double)a0 andCount:(int)a1 withNominalEnergy:(double)a2;
- (void)combineWith:(id)a0;
- (double)notificationEnergy;

@end
