@class NSXPCConnection, NSString, NSXPCInterface;
@protocol TUConversationLinkDescriptorDataSourceDelegate, TUConversationLinkDescriptorXPCServer;

@interface TUConversationLinkDescriptorXPCClientDataSource : NSObject <TUConversationLinkDescriptorXPCClient, TUConversationLinkDescriptorDataSource>

@property (class, retain, nonatomic) id<TUConversationLinkDescriptorXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUConversationLinkDescriptorXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *clientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *serverXPCInterface;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TUConversationLinkDescriptorDataSourceDelegate> conversationLinkDescriptorDataSourceDelegate;

- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)conversationLinkDescriptorsDidChange;
- (BOOL)addConversationLinkDescriptors:(id)a0 error:(id *)a1;
- (void)addConversationLinkDescriptors:(id)a0 completion:(id /* block */)a1;
- (BOOL)addOrUpdateConversationLinkDescriptors:(id)a0 error:(id *)a1;
- (void)addOrUpdateConversationLinkDescriptors:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(id)a0 error:(id *)a1;
- (void)conversationLinkDescriptorCountWithPredicate:(id)a0 completion:(id /* block */)a1;
- (id)conversationLinkDescriptorsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 error:(id *)a3;
- (void)conversationLinkDescriptorsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(id)a0 error:(id *)a1;
- (void)removeConversationLinkDescriptorsWithPredicate:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)setActivated:(BOOL)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (void)setActivated:(BOOL)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)setExpirationDate:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (void)setExpirationDate:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)setInvitedHandles:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (void)setInvitedHandles:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)setName:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (void)setName:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;

@end
