@interface ChronoCore.KeybagMonitor : NSObject {
    void /* unknown type, empty encoding */ firstUnlockSubject;
    void /* unknown type, empty encoding */ lockStateSubject;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ queue_currentLockState;
    void /* unknown type, empty encoding */ queue_unlockedSinceBoot;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ publishQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
