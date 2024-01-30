@interface SeymourUI.AppStateMonitor : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ eventHub;
}

- (void)publishAppDidBecomeActive;
- (void)publishAppDidEnterBackground;
- (void)publishAppWillEnterForeground;
- (void)publishAppWillResignActive;
- (void)publishAppWillTerminate;

@end
