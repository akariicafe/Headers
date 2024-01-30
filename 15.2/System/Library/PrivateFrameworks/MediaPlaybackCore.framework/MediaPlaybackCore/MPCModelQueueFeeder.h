@class MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, NSDictionary, NSObject, MPModelGenericObject, MPModelResponse, NSString, MPIdentifierSet, NSHashTable, MPPropertySet, MPAVItem, MPModelRequest, NSLock, MPRequestResponseController;
@protocol MPCModelPlaybackRequest, MPMutableIdentifierListSection, MPCModelPlaybackResponse, OS_dispatch_queue;

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCQueueControllerDataSource> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSLock *_diffLock;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_assetStoreFronts;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    NSDictionary *_endTimeModifications;
    id /* block */ _loadingCompletionHandler;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    BOOL _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id<MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPAVItem *_currentItem;
    MPCModelPlaybackContext *_playbackContext;
    MPPropertySet *_representativeMetadataPropertySet;
}

@property (class, readonly, nonatomic) MPPropertySet *requiredPropertiesForStaticMediaClips;

@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsTransportableContent;

- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (id)firstModelPlayEvent;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (long long)supplementalPlaybackContextBehavior;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)applyVolumeNormalizationForItem:(id)a0;
- (id)uniqueIdentifier;
- (BOOL)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)didFinishLoadingRequestForController:(id)a0;
- (void)willBeginLoadingRequestForController:(id)a0;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (void)dealloc;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (void)itemDidBeginPlayback:(id)a0;
- (BOOL)canJumpToItem:(id)a0;
- (BOOL)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (id)playbackInfoForItem:(id)a0;
- (id)updatedPlaybackContext;
- (void)_performRequestUpdate:(id /* block */)a0;
- (void)_didUpdateToResponse:(id)a0;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)a0;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)a0;
- (id)_supplementalLibraryRequest;

@end
