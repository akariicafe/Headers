@class MPCModelRadioPlaybackContext, NSString, ICPlayActivityController, ICUserIdentityStore, MPAVItem, NSDictionary, MPCModelRadioPersonalizationResponse, NSObject, MPCPlaybackRequestEnvironment, MPCModelRadioPlaybackQueue, ICStoreRequestContext;
@protocol OS_dispatch_queue, MPMutableIdentifierListSection;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPAVItemObserver, ICEnvironmentMonitorObserver, MPCQueueControllerDataSource> {
    id<MPMutableIdentifierListSection> _section;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCModelRadioPlaybackContext *_playbackContext;
    BOOL _needsSectionUpdate;
    NSObject<OS_dispatch_queue> *_diffQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    BOOL _hasReachedTracklistEnd;
    BOOL _supportsLoadingAdditionalItems;
    NSString *_lastCleanPlayedIdentifier;
    NSString *_lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    BOOL _mayHaveRestrictedContent;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _queueGeneration;
    NSString *_siriAssetInfo;
    ICUserIdentityStore *_observedIdentityStore;
    ICStoreRequestContext *_storeRequestContext;
    ICPlayActivityController *_playActivityController;
    id /* block */ _finalTracklistLoadingCompletionHandler;
}

@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsTransportableContent;

+ (id)sharedQueue;

- (void)_beginBackgroundTaskAssertion;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_endBackgroundTaskAssertion;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (id)modelPlayEvent;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (long long)supplementalPlaybackContextBehavior;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (long long)itemCount;
- (BOOL)canSkipItem:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)didSignificantlyChangeItem:(id)a0;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (void)itemDidBeginPlayback:(id)a0;
- (BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)a0;
- (long long)prefetchThresholdForSection:(id)a0;
- (void)loadAdditionalItemsWithRequest:(id)a0 forSection:(id)a1 completion:(id /* block */)a2;
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)a0;
- (id)updatedPlaybackContext;
- (void)_allowCellularStreamingDidChangeNotification:(id)a0;
- (void)_updateAdditionalLoadingSupport;
- (void)_endObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)a0 radioStation:(id)a1;
- (void)_loadTracksWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_detectSignOutForIdentityStore:(id)a0;
- (void)_responseDidInvalidate;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)a0;
- (id)_errorForRequest:(id)a0 withError:(id)a1;
- (void)_handlePersonalizationResponse:(id)a0 personalizationError:(id)a1 fromRequest:(id)a2 completion:(id /* block */)a3;
- (void)_observePersonalizationResponse:(id)a0;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)a0;
- (void)_beginObservingIdentityStoreForSignOut;
- (void)_handleGetTracksResponse:(id)a0 getTracksError:(id)a1 fromRequest:(id)a2 completion:(id /* block */)a3;
- (void)_responseDidInvalidateNotification:(id)a0;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (BOOL)_isTransientLoadingError:(id)a0;

@end
