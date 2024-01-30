@class NSSet, NSString, FBSSerialQueue, NSMutableSet;

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSSet *_prerequisiteMilestones;
    NSMutableSet *_clients;
    NSSet *_clients_immutable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clients_immutable_lock;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSSet *_prerequisiteMilestones;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FBSSerialQueue *queue;
@property (readonly, nonatomic) NSSet *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)noteClientDidDisconnect:(id)a0;
- (void)noteClientDidConnect:(id)a0 withMessage:(id)a1;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 withType:(long long)a1 toClients:(id)a2;
- (BOOL)queue_clientDidConnect:(id)a0 withMessage:(id)a1;
- (void)queue_clientDidDisconnect:(id)a0;
- (void)queue_handleMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (BOOL)shouldAllowClientConnection:(id)a0 withMessage:(id)a1;

@end
