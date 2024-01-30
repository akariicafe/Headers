@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (void).cxx_destruct;
- (id)eventName;

@end
