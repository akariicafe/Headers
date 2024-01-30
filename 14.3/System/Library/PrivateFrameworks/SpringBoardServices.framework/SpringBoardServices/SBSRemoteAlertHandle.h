@class NSString, NSHashTable, NSObject;
@protocol SBSRemoteAlertHandleClient, OS_dispatch_queue;

@interface SBSRemoteAlertHandle : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    BOOL _active;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    BOOL _valid;
    id<SBSRemoteAlertHandleClient> _handleClient;
    NSHashTable *_observers;
}

@property (class, retain) id<SBSRemoteAlertHandleClient> defaultHandleClient;

@property (readonly, copy, nonatomic) NSString *handleID;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)lookupHandlesForDefinition:(id)a0 creatingIfNone:(BOOL)a1;
+ (id)lookupHandlesForDefinition:(id)a0 creatingIfNone:(BOOL)a1 configurationContext:(id)a2;
+ (id)lookupHandlesForDefinition:(id)a0;
+ (id)newHandleWithDefinition:(id)a0 configurationContext:(id)a1;
+ (id)lookupHandlesForConfiguration:(id)a0 creatingIfNone:(BOOL)a1;
+ (id)handleWithConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)activateWithContext:(id)a0;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)_invalidateWithError:(id)a0 shouldInvalidateHandleClient:(BOOL)a1;
- (void)activateWithOptions:(id)a0;
- (id)_initWithHandleID:(id)a0 handleClient:(id)a1;
- (void)_receivedInvalidationWithError:(id)a0;
- (void)invalidate;

@end
