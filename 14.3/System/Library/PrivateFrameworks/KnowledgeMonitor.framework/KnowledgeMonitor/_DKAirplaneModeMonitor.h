@class NSNumber;

@interface _DKAirplaneModeMonitor : _DKMonitor

@property (retain, nonatomic) NSNumber *airplaneModeStatus;
@property struct __SCPreferences { } *radioPrefs;

+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)updateAirplaneModeStatus;
- (void)deactivate;

@end
