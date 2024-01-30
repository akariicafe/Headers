@class NSObject, NSString, BSCompoundAssertion, BSServiceConnection, BKSHIDEventDeferringEnvironment;
@protocol OS_dispatch_queue;

@interface SBSKeyboardFocusService : NSObject <SBSKeyboardFocusServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSCompoundAssertion *_externalSceneIdentitiesAssertion;
}

@property (class, readonly, nonatomic) BKSHIDEventDeferringEnvironment *systemKeyCommandOverlayEnvironment;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_connection;
- (void).cxx_destruct;
- (id)applyAdditionalDeferringRules:(id)a0 whenSceneHasKeyboardFocus:(id)a1 processID:(int)a2;
- (void)removeKeyboardFocusFromSceneIdentity:(id)a0 processID:(int)a1;
- (void)requestKeyboardFocusForSceneIdentity:(id)a0 processID:(int)a1 completion:(id /* block */)a2;
- (id)setExternalSceneIdentities:(id)a0 forReason:(id)a1;

@end
