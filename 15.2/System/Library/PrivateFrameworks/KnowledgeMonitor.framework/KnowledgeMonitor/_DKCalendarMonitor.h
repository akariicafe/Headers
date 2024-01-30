@interface _DKCalendarMonitor : _DKMonitor {
    BOOL _enabled;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithTitle:(id)a0 interaction:(id)a1;

- (void)start;
- (void)update;
- (id)init;
- (void)_receiveDatabaseChangeNotification:(id)a0;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
