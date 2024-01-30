@interface CPSystemStateObserver : NSObject <CPAudioPolicyStateObserver, CPSystemStateObserver> {
    void /* unknown type, empty encoding */ carplayObserver;
    void /* unknown type, empty encoding */ managedConfigObserver;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ audioRoutePolicyManager;
    void /* unknown type, empty encoding */ carPlayConnected;
    void /* unknown type, empty encoding */ isLockdownModeEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_screenTimeAllowed;
    void /* unknown type, empty encoding */ $__lazy_storage_$__allowSharePlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$__allowScreenSharing;
}

@property (nonatomic, readonly) BOOL allowSharePlay;
@property (nonatomic, readonly) BOOL allowScreenSharing;

- (void)audioPolicyManager:(id)a0 sharePlayAllowedStateChanged:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)addObserver:(id)a0 withQueue:(id)a1;

@end
