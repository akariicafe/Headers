@interface SeymourUI.AppStateMonitor : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ eventHub;
}

- (void)publishAppDidBecomeActive;
- (void)publishAppWillEnterForeground;
- (void)publishAppWillResignActive;
- (void)publishAppWillTerminate;
- (void)publishAppAttentionLost;
- (void)publishAppAttentionGained;

@end
