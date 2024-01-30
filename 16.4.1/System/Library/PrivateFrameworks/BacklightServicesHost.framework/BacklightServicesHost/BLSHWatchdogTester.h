@class NSMapTable, BLSHWatchdogProvider;

@interface BLSHWatchdogTester : NSObject {
    NSMapTable *_testables;
    unsigned long long _lock_nextTimerID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSHWatchdogProvider *_watchdogProvider;
}

- (void).cxx_destruct;
- (id)_watchdogProvider;
- (void)_triggerTestWatchdog:(id)a0;
- (id)initWithWatchdogTestables:(id)a0;

@end
