@class NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {
    NSMutableSet *_activeSessions;
    NSXPCConnection *_clientConnection;
}

+ (BOOL)isSupported;
+ (id)sharedManager;
+ (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)createManagementSessionWithDelegate:(id)a0;
- (void)registerFriendSideSharingTestCompletionHandler:(id /* block */)a0;
- (void)registerFriendSideInvitationUnusableHandler:(id /* block */)a0;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)a0;
- (void)unregisterSharingTestHandlers;
- (id)createPairingSessionWithDelegate:(id)a0;
- (void)registerSession:(id)a0;
- (void)registerFriendSideSharingTestInvitationHandler:(id /* block */)a0;
- (void)unregisterSession:(id)a0;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)a0;
- (void)registerOwnerSideSharingTestInvitations:(id)a0 callback:(id /* block */)a1;
- (void)registerOwnerSideSharingTestCompletionHandler:(id /* block */)a0;
- (id)createSharingSessionWithDelegate:(id)a0;
- (id)connection;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)a0;

@end
