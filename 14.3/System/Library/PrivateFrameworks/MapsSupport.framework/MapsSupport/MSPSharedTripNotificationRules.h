@class NSDate;

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
@property (readonly, nonatomic) unsigned long long currentlyNecessaryNotificationType;

+ (id)unarchivingObjectsSet;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0 minimumNotificationInterval:(double)a1;
- (void)incrementMinimumETADifference;
- (double)minimumETADifferenceIncrement;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0;
- (void)didPostNotification;
- (void)didReceiveUpdateWithETA:(double)a0 lastUpdated:(double)a1;

@end
