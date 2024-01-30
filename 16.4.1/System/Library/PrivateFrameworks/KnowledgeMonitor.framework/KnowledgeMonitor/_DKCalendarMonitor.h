@interface _DKCalendarMonitor : _DKMonitor {
    BOOL _enabled;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithTitle:(id)a0 interaction:(id)a1;

- (void)deactivate;
- (void)update;
- (void)dealloc;
- (void)_receiveDatabaseChangeNotification:(id)a0;
- (void)stop;
- (id)init;
- (void)start;

@end
