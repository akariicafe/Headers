@class NSNumber;

@interface _DKAirplaneModeMonitor : _DKMonitor

@property (retain, nonatomic) NSNumber *airplaneModeStatus;
@property struct __SCPreferences { } *radioPrefs;

+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;

- (void)start;
- (void)updateAirplaneModeStatus;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
