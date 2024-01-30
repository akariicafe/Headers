@class NSNumber, BMSource;

@interface _DKLowPowerModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_BMEventWithLowPowerModeState:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)updateLowPowerMode;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
