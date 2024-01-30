@class NSString, NSNumber;

@interface HKMobilityWalkingSteadinessAnalyticsNotificationEventMetric : NSObject <HKMobilityAnalyticsEventMetric>

@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (retain, nonatomic) NSString *notificationClassification;
@property (retain, nonatomic) NSString *notificationType;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) NSNumber *daysSinceLastNotification;
@property (retain, nonatomic) NSNumber *areHealthNotificationsAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresImproveHealthAndActivityAllowed;

@end
