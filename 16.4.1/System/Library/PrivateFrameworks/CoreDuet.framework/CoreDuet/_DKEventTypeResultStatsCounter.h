@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventName;
- (id)typeValues;
- (id)eventType;
- (void).cxx_destruct;

@end
