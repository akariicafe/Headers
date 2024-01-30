@class NSString, NSDictionary;

@interface WFScanPerformanceEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)metric;
- (void).cxx_destruct;
- (unsigned int)metricIdentifier;
- (id)_scanReasonToString:(unsigned long long)a0;
- (id)initWithScanReason:(unsigned long long)a0 timeElasped:(unsigned long long)a1 firstScan:(BOOL)a2 results:(unsigned long long)a3 errorCode:(long long)a4 lowPriority:(BOOL)a5 rssiFilter:(BOOL)a6;

@end
