@class NSSet, NSXPCConnection, NSXPCInterface, NSDictionary, NSObject, NSString;
@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate, OS_dispatch_queue, TUConversationManagerXPCServer;

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerXPCClient, TUConversationManagerDataSource>

@property (class, readonly, copy, nonatomic) NSSet *conversationManagerAllowedClasses;
@property (class, retain, nonatomic) id<TUConversationManagerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUConversationManagerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *conversationManagerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *conversationManagerServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL hasRequestedInitialState;
@property (nonatomic) int shouldConnectToken;
@property (nonatomic) BOOL shouldConnectToHost;
@property (copy, nonatomic) NSDictionary *conversationsByGroupUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUConversationManagerDataSourceDelegate> delegate;
@property (weak, nonatomic) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (void)handleServerDisconnect;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (oneway void)updateConversationsByGroupUUID:(id)a0;
- (void)_requestInitialStateIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDownlinkMuted:(BOOL)a0 forRemoteParticipantsInConversation:(id)a1;
- (oneway void)mediaPrioritiesChangedForConversation:(id)a0;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)buzzMember:(id)a0 conversation:(id)a1;
- (void)_invokeCompletionHandler:(id /* block */)a0;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)a0;
- (void)updateConversationWithUUID:(id)a0 participantPresentationContexts:(id)a1;
- (void)addRemoteMembers:(id)a0 toConversation:(id)a1;
- (void)invalidate;

@end
