@class NSString, NSObject, NSHashTable;
@protocol SBSRemoteAlertHandleClient, OS_dispatch_queue;

@interface SBSRemoteAlertHandle : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_active;
    BOOL _lock_valid;
    NSHashTable *_lock_observers;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    id<SBSRemoteAlertHandleClient> _handleClient;
}

@property (class, retain) id<SBSRemoteAlertHandleClient> defaultHandleClient;

@property (readonly, copy, nonatomic) NSString *handleID;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)newHandleWithDefinition:(id)a0 configurationContext:(id)a1;
+ (id)lookupHandlesForDefinition:(id)a0 creatingIfNone:(BOOL)a1 configurationContext:(id)a2;
+ (id)handleWithConfiguration:(id)a0;
+ (id)lookupHandlesForConfiguration:(id)a0 creatingIfNone:(BOOL)a1;
+ (id)lookupHandlesForDefinition:(id)a0;
+ (id)lookupHandlesForDefinition:(id)a0 creatingIfNone:(BOOL)a1;

- (void)addObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activateWithContext:(id)a0;
- (id)_initWithHandleID:(id)a0 handleClient:(id)a1;
- (void)_receivedInvalidationWithError:(id)a0;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)_invalidateWithError:(id)a0 shouldInvalidateHandleClient:(BOOL)a1;
- (void)activateWithOptions:(id)a0;

@end
