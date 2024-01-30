@class NSString, NSDictionary;

@interface WFDiagnosticsEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)metric;
- (void).cxx_destruct;
- (unsigned int)metricIdentifier;
- (id)_testTypeToString:(long long)a0;
- (id)initWithDiagnosticsEventType:(long long)a0 didPassTest:(BOOL)a1 failedTests:(id)a2;

@end
