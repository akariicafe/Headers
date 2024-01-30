@class NSString, NSDictionary;

@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(unsigned long long)a0 watchSleepTrackingEnabled:(BOOL)a1;

@end
