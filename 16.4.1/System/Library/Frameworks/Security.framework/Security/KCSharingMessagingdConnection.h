@class NSString, NSXPCConnection;

@interface KCSharingMessagingdConnection : NSObject <KCSharingMessagingdXPCServerProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)ping;
- (void)connectionWasInvalidated;
- (void)pingWithReply:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (void)didAcceptInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)didDeclineInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)fetchReceivedInviteWithGroupID:(id)a0 completion:(id /* block */)a1;
- (void)fetchReceivedInvitesWithCompletion:(id /* block */)a0;
- (id)initWithConnection:(id)a0 interface:(id)a1 queue:(id)a2;
- (void)sendNewInvitesForGroup:(id)a0 completion:(id /* block */)a1;

@end
