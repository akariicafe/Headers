@class NSNumber;

@interface _DKLowPowerModeMonitor : _DKMonitor

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)updateLowPowerMode;
- (void)start;
- (void).cxx_destruct;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)stop;

@end
