@class NSString, NSMutableDictionary, NSMutableSet, BSProcessHandle;

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_entitlements;
    NSMutableSet *_lock_connections;
    unsigned long long _lock_lastConnectedGenerationCount;
    BSProcessHandle *_processHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
