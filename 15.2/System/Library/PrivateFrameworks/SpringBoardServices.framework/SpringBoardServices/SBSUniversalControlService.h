@class BSServiceConnection, NSString, BSCompoundAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SBSUniversalControlService : NSObject <SBSUniversalControlServerToClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BSCompoundAssertion *_disableKeyboardFocusAssertion;
    BSCompoundAssertion *_screenEdgeOwnershipAssertion;
    BSServiceConnection *_serverConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)disableKeyboardFocusOnCurrentDeviceForReason:(id)a0;
- (id)acquireScreenEdgeOwnershipForPointerEvents:(unsigned long long)a0 forReason:(id)a1;

@end
