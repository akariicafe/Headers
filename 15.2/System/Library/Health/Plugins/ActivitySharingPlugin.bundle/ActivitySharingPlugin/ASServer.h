@class NSString, ASActivitySharingManager, NSUUID, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface ASServer : NSObject <HDTaskServer, ASServerInterface, _HKXPCExportable> {
    ASActivitySharingManager *_activitySharingManager;
    HDHealthStoreClient *_client;
    NSUUID *_taskUUID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)taskUUID;
- (void)connectionInvalidated;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)remote_sendInviteRequestToDestination:(id)a0 callerID:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)remote_acceptInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_sendCompetitionRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_acceptCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_ignoreCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_completeCompetitionWithFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_setActivityDataVisible:(BOOL)a0 toFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_setMuteEnabled:(BOOL)a0 forFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_removeFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_pushActivityDataWithCompletion:(id /* block */)a0;
- (void)remote_pushFakeActivityDataWithCompletion:(id /* block */)a0;
- (void)remote_fetchAllDataWithCompletion:(id /* block */)a0;
- (void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_cloudKitAccountStatusWithCompletion:(id /* block */)a0;
- (void)remote_clearFriendListWithCompletion:(id /* block */)a0;
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)a0 withCompletion:(id /* block */)a1;
- (void)remote_expireChangeTokenWithCompletion:(id /* block */)a0;
- (void)remote_friendWithRemoteUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)remote_queryAppBadgeCountWithCompletion:(id /* block */)a0;
- (id)initWithUUID:(id)a0 client:(id)a1 activitySharingManager:(id)a2;

@end
