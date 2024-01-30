@class NSTimer, NSMutableDictionary;

@interface _NSKeyValueDebugging : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_willDidCountTable;
    BOOL _hasScheduledWillDidClear;
    NSMutableDictionary *_consistencyTable;
    NSTimer *_consistencyCheckTimer;
    NSMutableDictionary *_observedKeyPathsByObserver;
}

- (void)dealloc;
- (void)_checkConsistency;
- (id)init;
- (void)_checkConsistencyForStatsWhileOutOfLock:(id)a0 forPair:(id)a1 timingDescription:(id)a2;
- (void)_clearWillDidTable;
- (void)_object:(id)a0 trackChangeForKeyOrKeys:(id)a1 operation:(long long)a2;

@end
