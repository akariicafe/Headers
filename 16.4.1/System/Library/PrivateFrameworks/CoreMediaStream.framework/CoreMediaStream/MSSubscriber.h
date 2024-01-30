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

+ (BOOL)isInRetryState;
+ (id)_descriptionForRetrievalState:(int)a0;
+ (void)_setMasterNextActivityDate:(id)a0 forPersonID:(id)a1;
+ (id)nextActivityDate;
+ (id)subscriberForPersonID:(id)a0;
+ (id)_descriptionForState:(int)a0;
+ (id)existingSubscriberForPersonID:(id)a0;
+ (id)nextActivityDateForPersonID:(id)a0;
+ (void)forgetPersonID:(id)a0;
+ (id)_clearInstantiatedSubscribersByPersonID;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;

- (void)deactivate;
- (void)abort;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)subscribedStreams;
- (void)resetSync;
- (void)_abort;
- (void)_changeStateTo:(int)a0;
- (void)retrieveAssets:(id)a0;
- (void)_didReceiveAuthenticationError:(id)a0;
- (void)_forget;
- (BOOL)_isInRetryState;
- (void)_retrieveAssets;
- (void)_changeRetrievalStateTo:(int)a0;
- (void)_checkForNewAssetCollections;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_finishedRetrievingAsset:(id)a0;
- (BOOL)_hasOutstandingPoll;
- (BOOL)_isAllowedToDownload;
- (void)_reauthorizeAssets;
- (void)_refreshServerSideConfigurationParameters;
- (void)_retrieveNextAssets;
- (void)_serverSideConfigurationDidChange:(id)a0;
- (void)_setHasOutstandingPoll:(BOOL)a0;
- (void)_setSubscriptionsByStreamID:(id)a0;
- (void)_stopOutSubscriberState:(int *)a0 outRetrievalState:(int *)a1;
- (id)_subscriptionsByStreamID;
- (void)_updateMasterManifest;
- (void)checkForNewAssetCollections;
- (void)checkForNewAssetCollectionsIfMissingCtag;
- (void)checkForOutstandingActivities;
- (id)ownSubscribedStream;
- (void)reauthorizationProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)reauthorizationProtocol:(id)a0 reauthorizedAssets:(id)a1 rejectedAssets:(id)a2 error:(id)a3;
- (void)subscribeStorageProtocol:(id)a0 didFinishRetrievingAsset:(id)a1 error:(id)a2;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)a0;
- (void)subscribeStreamsProtocol:(id)a0 didFindDisappearedSubscriptionForPersonID:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didFinishError:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 didFinishReceivingUpdatesForPersonID:(id)a1 ctag:(id)a2;
- (void)subscribeStreamsProtocol:(id)a0 didReceiveAssetCollections:(id)a1 forPersonID:(id)a2;
- (void)subscribeStreamsProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)subscribeStreamsProtocol:(id)a0 willReceiveUpdatesForPersonID:(id)a1 wasReset:(BOOL)a2 metadata:(id)a3;

@end
