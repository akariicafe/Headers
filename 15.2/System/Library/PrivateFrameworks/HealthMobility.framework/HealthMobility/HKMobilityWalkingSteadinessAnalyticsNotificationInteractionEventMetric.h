@class NSString, NSNumber;

@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventMetric : NSObject <HKMobilityAnalyticsEventMetric>

@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (copy, nonatomic) NSString *notificationClassification;
@property (copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic) NSString *notificationInteractionType;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresImproveHealthAndActivityAllowed;

@end
