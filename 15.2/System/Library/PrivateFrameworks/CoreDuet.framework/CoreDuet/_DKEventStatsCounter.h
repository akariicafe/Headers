@class _DKEventStatsCounterInternal;

@interface _DKEventStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (void).cxx_destruct;
- (id)eventName;

@end
