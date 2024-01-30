@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SUKeybagInterface : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    BOOL _queue_hasPasscodeSet;
    BOOL _queue_isPasscodeLocked;
    NSHashTable *_queue_observers;
    int _stateChangedNotifyToken;
}

@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) BOOL isPasscodeLocked;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)_queue_refreshState;
- (id)stringForStashMode:(int)a0;
- (int)_queue_fetchKeybagState;
- (BOOL)_queue_hasPasscodeSetFromLockState:(int)a0;
- (void)_queue_setHasPasscodeSet:(BOOL)a0;
- (BOOL)_queue_isPasscodeLockedFromLockState:(int)a0;
- (void)_queue_setIsPasscodeLocked:(BOOL)a0;
- (BOOL)hadFirstUnlock;
- (int)installationKeybagStateForDescriptor:(id)a0;
- (BOOL)createInstallationKeybagForDescriptor:(id)a0 withSecret:(id)a1 forUnattendedInstall:(BOOL)a2;
- (BOOL)persistKeybagStash;
- (BOOL)disableKeybagStash;
- (id)createPreventLockAssertionWithDuration:(double)a0;

@end
