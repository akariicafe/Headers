@interface _DKCalendarMonitor : _DKMonitor {
    BOOL _enabled;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithTitle:(id)a0 interaction:(id)a1;

- (void)_receiveDatabaseChangeNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)update;
- (void)start;
- (void)deactivate;

@end
