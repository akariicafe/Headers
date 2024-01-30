@class NSString, DMCJobQueue, APSConnection, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface MDMServerCore : NSObject <APSConnectionDelegate> {
    unsigned int _reauthMAIDNotifyToken;
}

@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSString *serverName;
@property (readonly, copy, nonatomic) NSString *daemonIdentifier;
@property (retain, nonatomic) DMCJobQueue *jobQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) APSConnection *memberQueueDevAPSConnection;
@property (retain, nonatomic) APSConnection *memberQueueProdAPSConnection;
@property (nonatomic) BOOL memberQueueIsMDMConfigurationValid;
@property (nonatomic) BOOL memberQueueIsUprooting;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (retain, nonatomic) NSData *memberQueuePushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)readConfigurationOutError:(id *)a0 isUproot:(BOOL)a1;
- (void)setTokenUpdateRequestCountToZero;
- (void)clearCachedResponse;
- (void)pushTokenCompletionBlock:(id /* block */)a0;
- (id)_processTraditionalUnauthorizedFromTransaction:(id)a0 assertion:(id)a1;
- (id)_processUserChannelUnauthorizedFromTransaction:(id)a0 rmAccountID:(id)a1 reauthQueue:(id)a2;
- (BOOL)handleHTTPStatusGoneResponse;
- (id)_processTraditionalErrorFromTransaction:(id)a0;
- (void)executionQueueRemoveMDMProfileWithAssertion:(id)a0;
- (id)_processUnauthorizedMAIDFromTransaction:(id)a0 authURL:(id)a1 rmAccountID:(id)a2 rmAccountUsername:(id)a3 reauthQueue:(id)a4;
- (id)_processUnauthorizedAuthServicesWithAuthURL:(id)a0 rmAccountID:(id)a1 rmAccountUsername:(id)a2;
- (void)_presentFollowUpForAuthURL:(id)a0 accountUsername:(id)a1 isMAIDAccount:(BOOL)a2;
- (void)_listenForManagedAppleAccountLongLivedTokenChangedNotificationsOnQueue:(id)a0 perform:(id /* block */)a1;
- (void)memberQueueSetupAPSConnectionIsMDMConfigurationValid:(BOOL)a0 isUserDaemon:(BOOL)a1;
- (id)responseDataFromResponseDictionary:(id)a0;
- (id)httpErrorFromTransaction:(id)a0 assertion:(id)a1 rmAccountID:(id)a2 enrollmentMode:(id)a3 reauthQueue:(id)a4;
- (BOOL)_isMAIDNotificationActive;
- (void)clearMAIDNotification;
- (void)clearCoreFollowup;

@end
