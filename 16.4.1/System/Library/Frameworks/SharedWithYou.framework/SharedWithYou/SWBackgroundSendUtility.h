@class SLDServiceProxy, SFCollaborationCompositionDictionaryProvider, TUConversation, NSObject;
@protocol OS_dispatch_queue;

@interface SWBackgroundSendUtility : NSObject <SFCollaborationCompositionDictionaryProviderDelegate, SLDServiceProxyDelegate>

@property (retain, nonatomic) SLDServiceProxy *serviceProxy;
@property (retain, nonatomic) SFCollaborationCompositionDictionaryProvider *compositionDictionaryProvider;
@property (retain, nonatomic) TUConversation *faceTimeConversation;
@property (copy, nonatomic) id /* block */ pendingCollaborationRequest;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)serviceProxyDidDisconnect:(id)a0;
- (void)serviceProxyDidConnect:(id)a0;
- (void).cxx_destruct;
- (id)remoteService;
- (void)_addCollaborationRequest:(id /* block */)a0;
- (void)_processPendingCollaborationRequest;
- (void)dictionaryDidBecomeAvailable:(id)a0 forProvider:(id)a1;
- (id)initWithItemProvider:(id)a0 faceTimeConversation:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)sendCollaboration:(id)a0 faceTimeConversationUUID:(id)a1 completionHandler:(id /* block */)a2;

@end
