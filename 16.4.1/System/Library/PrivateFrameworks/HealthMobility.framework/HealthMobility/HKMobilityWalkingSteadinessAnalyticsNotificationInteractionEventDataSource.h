@class NSString, HKHealthStore;

@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider> {
    HKHealthStore *_healthStore;
    NSString *_category;
    NSString *_actionIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)biologicalSexWithError:(id *)a0;
- (void).cxx_destruct;
- (id)ageWithError:(id *)a0;
- (id)_walkingSteadinessEventValueForCategory:(id)a0;
- (id)initWithHealthStore:(id)a0 category:(id)a1 action:(id)a2;
- (id)notificationClassificationWithError:(id *)a0;
- (id)notificationInteractionTypeWithError:(id *)a0;
- (id)notificationTypeWithError:(id *)a0;

@end
