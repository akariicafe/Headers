@class NSString, NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {
    NSMutableSet *_activeSessions;
    NSXPCConnection *_clientConnection;
    NSString *_serviceName;
}

+ (id)getHydraEncryptionCert:(id)a0 session:(id)a1 seid:(id)a2 outError:(id *)a3;
+ (id)sharedManager;
+ (id)createHydraKey:(id)a0 seid:(id)a1 serverParameters:(id)a2 outError:(id *)a3;
+ (BOOL)isSupported;
+ (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;
+ (id)createHomeKey:(id)a0 seid:(id)a1 readerIdentifier:(id)a2 readerPublicKey:(id)a3 outError:(id *)a4;
+ (BOOL)updateHydraKey:(id)a0 session:(id)a1 seid:(id)a2 encryptedSEData:(id)a3 outError:(id *)a4;

- (void)registerOwnerSideSharingTestCompletionHandler:(id /* block */)a0;
- (void)registerFriendSideSharingTestInvitationHandler:(id /* block */)a0;
- (id)createManagementSessionWithDelegate:(id)a0;
- (void)registerOwnerSideSharingTestInvitations:(id)a0 callback:(id /* block */)a1;
- (id)createPairingSessionWithDelegate:(id)a0;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)a0;
- (void)registerFriendSideInvitationUnusableHandler:(id /* block */)a0;
- (void)registerSession:(id)a0;
- (void)registerFriendSideSharingTestCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterSession:(id)a0;
- (id)connection;
- (id)createSharingSessionWithDelegate:(id)a0;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)a0;
- (void)unregisterSharingTestHandlers;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)a0;

@end
