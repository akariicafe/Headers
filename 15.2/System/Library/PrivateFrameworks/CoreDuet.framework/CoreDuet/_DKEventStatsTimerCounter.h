@class _DKEventStatsCounterInternal;

@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (void).cxx_destruct;
- (id)eventName;

@end
