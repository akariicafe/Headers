@class HMDHome, NSString;
@protocol HMDTimePeriodNotificationConditionTimeProvider, HMDTimePeriodNotificationConditionSunsetSunriseProvider;

@interface HMDTimePeriodNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>

@property (readonly, weak) HMDHome *home;
@property (readonly) id<HMDTimePeriodNotificationConditionTimeProvider> timeProvider;
@property (readonly) id<HMDTimePeriodNotificationConditionSunsetSunriseProvider> sunriseSunsetProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (BOOL)canHandleCondition:(id)a0;
- (BOOL)conditionPasses:(id)a0;
- (id)initWithHome:(id)a0 timeProvider:(id)a1 sunriseSunsetProvider:(id)a2;
- (id)_dateComponentsForTimePeriodElement:(id)a0 home:(id)a1;
- (id)_dateTodayMatchingComponents:(id)a0;

@end
