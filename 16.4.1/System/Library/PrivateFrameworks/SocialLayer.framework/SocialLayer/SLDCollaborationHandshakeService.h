@class SLDProcessVerifier, SLPersonIdentityGenerator, SLDTaskManager, NSString, NSObject, SLSWActionDispatcher;
@protocol OS_dispatch_queue;

@interface SLDCollaborationHandshakeService : NSObject <SLDService, SLDCollaborationHandshakeService>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (retain, nonatomic) SLDTaskManager *taskManager;
@property (retain, nonatomic) SLDProcessVerifier *processVerifier;
@property (retain, nonatomic) SLSWActionDispatcher *actionDispatcher;
@property (readonly, nonatomic) SLPersonIdentityGenerator *personIdentityGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;
+ (void)setupInterface:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)prepareConnectionWithReply:(id /* block */)a0;
- (id)_removeIdentities:(id)a0 fromMetadata:(id)a1;
- (unsigned long long)_acquireSandboxHandleData:(id)a0 ForFileProviderDocumentURL:(id)a1 clientConnection:(id)a2 error:(id *)a3;
- (BOOL)_connection:(id)a0 hasPermissionForFileURL:(id)a1;
- (BOOL)_doesMetadata:(id)a0 containAllOf:(id)a1;
- (BOOL)_doesMetadata:(id)a0 containAnyOf:(id)a1;
- (BOOL)_fileURLHasFileProvider:(id)a0 error:(id *)a1;
- (void)_localPersonIdentityForDocumentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_personIdentitiesForHandles:(id)a0 documentIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_releaseSandboxHandle:(unsigned long long)a0;
- (void)_sendActionUpdateParticipantsWithFileURL:(id)a0 metadata:(id)a1 addedIdentities:(id)a2 removedIdentities:(id)a3 completion:(id /* block */)a4;
- (void)_sendActionUpdateParticipantsWithMetadata:(id)a0 addedIdentities:(id)a1 removedIdentities:(id)a2 completion:(id /* block */)a3;
- (id)_updateMetadata:(id)a0 withNewIdentities:(id)a1;
- (id)addParticipantHandles:(id)a0 withFileURL:(id)a1 sandboxTokenData:(id)a2 metadata:(id)a3 reply:(id /* block */)a4;
- (id)addParticipantHandles:(id)a0 withMetadata:(id)a1 reply:(id /* block */)a2;
- (BOOL)allowsConnection:(id)a0;
- (id)generateProofForIdentity:(id)a0 collaborationIdentifier:(id)a1 reply:(id /* block */)a2;
- (id)removeParticipantIdentities:(id)a0 withFileURL:(id)a1 sandboxTokenData:(id)a2 metadata:(id)a3 reply:(id /* block */)a4;
- (id)removeParticipantIdentities:(id)a0 withMetadata:(id)a1 reply:(id /* block */)a2;
- (id)startCollaborationWithFileURL:(id)a0 sandboxTokenData:(id)a1 metadata:(id)a2 participants:(id)a3 reply:(id /* block */)a4;
- (id)startCollaborationWithMetadata:(id)a0 participants:(id)a1 reply:(id /* block */)a2;
- (id)verifySourceBundleIdentifierFromMetadata:(id)a0 reply:(id /* block */)a1;

@end
