@class NSString, NSDictionary, NSArray;

@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_payloadWithApplication:(id)a0 isSleepTrackingEnabled:(BOOL)a1 activeWatchProductType:(id)a2 provenanceSource:(id)a3;

- (void).cxx_destruct;
- (id)initWithScheduleChangeInfo:(id)a0 provenanceInfo:(id)a1;

@end
