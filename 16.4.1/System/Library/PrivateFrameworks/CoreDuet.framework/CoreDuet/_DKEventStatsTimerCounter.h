@class _DKEventStatsCounterInternal;

@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventName;
- (void).cxx_destruct;

@end
