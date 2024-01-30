@class NSNumber, BMSource;

@interface _DKAirplaneModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *airplaneModeStatus;
@property struct __SCPreferences { } *radioPrefs;

+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0;

- (void)deactivate;
- (void)dealloc;
- (void)updateAirplaneModeStatus;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
