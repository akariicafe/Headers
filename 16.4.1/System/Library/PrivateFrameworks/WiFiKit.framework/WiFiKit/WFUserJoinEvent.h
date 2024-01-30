@class NSString, PBCodable, NSDictionary;

@interface WFUserJoinEvent : NSObject <WFUIEvent>

@property (nonatomic) unsigned int metricIdentifier;
@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)joinEventWithSecurity:(long long)a0 error:(long long)a1 sectionCounts:(id)a2 sectionName:(id)a3 didRun:(BOOL)a4 didPass:(BOOL)a5 failedTests:(id)a6;
+ (id)joinEventWithType:(long long)a0 security:(long long)a1 error:(long long)a2 didRun:(BOOL)a3 didPass:(BOOL)a4 failedTests:(id)a5;

- (void).cxx_destruct;
- (id)_countMetricsFromSectionCounts:(id)a0;
- (id)_eventTypeStringForType:(long long)a0;
- (unsigned int)_metricIdForType:(long long)a0;
- (id)_sectionCountsToJSONString:(id)a0;
- (id)initWithType:(long long)a0 security:(long long)a1 error:(long long)a2 sectionCounts:(id)a3 sectionName:(id)a4 didRunVelocityTests:(BOOL)a5 didPassVelocityTests:(BOOL)a6 failedTests:(id)a7;

@end
