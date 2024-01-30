@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)typeValues;
- (void).cxx_destruct;
- (id)eventType;
- (id)eventName;

@end
