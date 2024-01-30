@class NSXPCConnection, NSString, NSXPCInterface;
@protocol TUConversationLinkDescriptorDataSourceDelegate, TUConversationLinkDescriptorXPCServer;

@interface TUConversationLinkDescriptorXPCClientDataSource : NSObject <TUConversationLinkDescriptorXPCClient, TUConversationLinkDescriptorDataSource, TUConversationLinkKeyValueDataSource>

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
- (long long)integerForKey:(id)a0 error:(id *)a1;
- (void)setActivated:(BOOL)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (void)stringForKey:(id)a0 completion:(id /* block */)a1;
- (void)removeConversationLinkDescriptorsWithPredicate:(id)a0 userInteraction:(BOOL)a1 completion:(id /* block */)a2;
- (void)setName:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1 error:(id *)a2;
- (void)conversationLinkDescriptorsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setInvitedHandles:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)setActivated:(BOOL)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (void)conversationLinkDescriptorCountWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)integerForKey:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)setInvitedHandles:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (void)setExpirationDate:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 completion:(id /* block */)a3;
- (void)conversationLinkDescriptorsDidChange;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (BOOL)addConversationLinkDescriptors:(id)a0 error:(id *)a1;
- (unsigned long long)setExpirationDate:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (id)conversationLinkDescriptorsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)addOrUpdateConversationLinkDescriptors:(id)a0 error:(id *)a1;
- (unsigned long long)setName:(id)a0 withRevision:(long long)a1 forConversationLinkDescriptorsWithPredicate:(id)a2 error:(id *)a3;
- (BOOL)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)init;
- (void)setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(id)a0 userInteraction:(BOOL)a1 error:(id *)a2;
- (void)addConversationLinkDescriptors:(id)a0 completion:(id /* block */)a1;
- (void)addOrUpdateConversationLinkDescriptors:(id)a0 completion:(id /* block */)a1;

@end
