@class NSNumber;

@interface _DKLowPowerModeMonitor : _DKMonitor

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)updateLowPowerMode;
- (void)stop;
- (void)start;
- (void)lowPowerModeStateChanged:(id)a0;

@end
