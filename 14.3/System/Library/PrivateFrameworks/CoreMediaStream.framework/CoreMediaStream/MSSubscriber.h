@class NSMutableArray, NSString, NSMutableDictionary, MSMediaStreamDaemon, MSSubscribeStreamsProtocol, MSReauthorizationProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
    BOOL _checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol *_protocol;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    int _retrievalState;
    id<MSSubscribeStorageProtocol> _storageProtocol;
    MSReauthorizationProtocol *_reauthProtocol;
    MSObjectQueue *_retrievalQueue;
    NSMutableArray *_assetsBeingRetrieved;
    long long _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (nonatomic) long long targetRetrievalByteCount;
@property (nonatomic) int retrievalBatchSize;
@property (nonatomic) id<MSSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptionForState:(int)a0;
+ (void)forgetPersonID:(id)a0;
+ (id)nextActivityDate;
+ (BOOL)isInRetryState;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)a0;
+ (void)_setMasterNextActivityDate:(id)a0 forPersonID:(id)a1;
+ (id)personIDsWithOutstandingActivities;
+ (id)_descriptionForRetrievalState:(int)a0;
+ (id)subscriberForPersonID:(id)a0;
+ (id)existingSubscriberForPersonID:(id)a0;
+ (id)_clearInstantiatedSubscribersByPersonID;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)_abort;
- (void)abort;
- (void)_forget;
- (id)subscribedStreams;
- (void)deactivate;
- (void)resetSync;
- (void)checkForOutstandingActivities;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)_updateMasterManifest;
- (void)_serverSideConfigurationDidChange:(id)a0;
- (BOOL)_isInRetryState;
- (void)reauthorizationProtocol:(id)a0 reauthorizedAssets:(id)a1 rejectedAssets:(id)a2 error:(id)a3;
- (void)reauthorizationProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)subscribeStorageProtocol:(id)a0 didFinishRetrievingAsset:(id)a1 error:(id)a2;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)a0;
- (void)subscribeStreamsProtocol:(id)a0 willReceiveUpdatesForPersonID:(id)a1 wasReset:(BOOL)a2 metadata:(id)a3;
- (void)subscribeStreamsProtocol:(id)a0 didReceiveAssetCollections:(id)a1 forPersonID:(id)a2;
- (void)subscribeStreamsProtocol:(id)a0 didFinishReceivingUpdatesForPersonID:(id)a1 ctag:(id)a2;
- (void)subscribeStreamsProtocol:(id)a0 didFindDisappearedSubscriptionForPersonID:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didFinishError:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)checkForNewAssetCollectionsIfMissingCtag;
- (void)checkForNewAssetCollections;
- (void)retrieveAssets:(id)a0;
- (id)ownSubscribedStream;
- (void)_changeStateTo:(int)a0;
- (void)_changeRetrievalStateTo:(int)a0;
- (void)_refreshServerSideConfigurationParameters;
- (BOOL)_hasOutstandingPoll;
- (void)_setHasOutstandingPoll:(BOOL)a0;
- (id)_subscriptionsByStreamID;
- (void)_setSubscriptionsByStreamID:(id)a0;
- (BOOL)_isAllowedToDownload;
- (void)_checkForNewAssetCollections;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_didReceiveAuthenticationError:(id)a0;
- (void)_retrieveAssets;
- (void)_retrieveNextAssets;
- (void)_reauthorizeAssets;
- (void)_stopOutSubscriberState:(int *)a0 outRetrievalState:(int *)a1;
- (void)_finishedRetrievingAsset:(id)a0;

@end
