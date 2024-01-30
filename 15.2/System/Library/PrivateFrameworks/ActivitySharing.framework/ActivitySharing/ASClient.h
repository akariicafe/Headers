@class NSString, HKProxyProvider, NSObject;
@protocol OS_dispatch_queue, ASServerInterface;

@interface ASClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<ASServerInterface> _serverProxy;
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)queryAppBadgeCountWithCompletion:(id /* block */)a0;
- (void)acceptInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)removeFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)a0;
- (void)setActivityDataVisible:(BOOL)a0 toFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)a0;
- (void)sendCompetitionRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllDataWithCompletion:(id /* block */)a0;
- (void)expireChangeTokenWithCompletion:(id /* block */)a0;
- (void)completeCompetitionWithFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)pushActivityDataToAllFriendsWithCompletion:(id /* block */)a0;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)a0 withCompletion:(id /* block */)a1;
- (id)exportedInterface;
- (void)clearFriendListWithCompletion:(id /* block */)a0;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setMuteEnabled:(BOOL)a0 forFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)sendInviteRequestToDestination:(id)a0 callerID:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_clientQueueSuccessCompletion:(id /* block */)a0;
- (void)friendWithRemoteUUID:(id)a0 completion:(id /* block */)a1;

@end
