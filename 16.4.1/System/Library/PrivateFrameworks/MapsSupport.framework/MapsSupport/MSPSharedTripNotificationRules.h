@class NSMapTable, NSDate;

@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxPostedNotifications;
@property (nonatomic) unsigned long long postedNotifications;
@property (nonatomic) double minimumETADifference;
@property (nonatomic) double minimumNotificationInterval;
@property (retain, nonatomic) NSDate *lastPostedETADate;
@property (retain, nonatomic) NSDate *lastPostedNotificationDate;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSDate *currentETADate;
@property (nonatomic) BOOL hasMadeFinalPush;
@property (retain, nonatomic) NSMapTable *intermediateArrivalWaypointPostedNotifications;

+ (id)unarchivingObjectsSet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)currentlyNecessaryNotificationTypeForState:(id)a0;
- (void)didPostNotificationType:(unsigned long long)a0 forState:(id)a1;
- (void)didReceiveUpdateWithETA:(double)a0 lastUpdated:(double)a1;
- (BOOL)hasSentNotificationType:(unsigned long long)a0 forState:(id)a1 waypoint:(id)a2;
- (void)incrementMinimumETADifference;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0 minimumNotificationInterval:(double)a1;
- (double)minimumETADifferenceIncrement;

@end
