@class NSString, NSHashTable, MCProfileConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {
    MCProfileConnection *_profileConnection;
    BOOL _isPasscodeSet;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, nonatomic) BOOL isPasscodeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)a0 userInfo:(id)a1;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;

@end
