@class NSString, MPPlaceholderAVItem, MPPlaybackContext, MPCPlaybackEngineEventStream;
@protocol MPCQueueControllerDataSource, MPRTCReportingItemSessionContaining, MPCQueueControllerDataSourceStateRestoring;

@interface _MPCQueueControllerDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {
    struct { unsigned char dataSourcePlaceholderItemForLoadingAdditionalItemsInSection : 1; unsigned char dataSourceSupplementalPlaybackContextWithReason : 1; unsigned char dataSourceSupplementalPlaybackContextBehavior : 1; unsigned char dataSourceCanJumpToItem : 1; unsigned char dataSourceCanSkipItem : 1; unsigned char dataSourceFirstItemIntersectingIdentifierSet : 1; unsigned char dataSourceItemDidBeginPlayback : 1; unsigned char dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection : 1; unsigned char dataSourcePrefetchThresholdForSection : 1; unsigned char dataSourceShouldUsePlaceholderForItemInSection : 1; unsigned char dataSourceSectionShouldShuffleExcludeItem : 1; unsigned char dataSourceUpdatedPlaybackContext : 1; } _supportedMethods;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, nonatomic) long long supplementalPlaybackContextBehavior;
@property (readonly, nonatomic) MPPlaybackContext *supplementalPlaybackContext;
@property (readonly, nonatomic) id<MPCQueueControllerDataSource, MPCQueueControllerDataSourceStateRestoring, MPRTCReportingItemSessionContaining> dataSource;
@property (readonly, nonatomic) MPPlaybackContext *playbackContext;
@property (readonly, nonatomic) BOOL shouldAddOriginalPlaybackContextAfterReplacement;
@property (readonly, nonatomic) MPPlaybackContext *originalPlaybackContext;
@property (nonatomic) long long state;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *preferredStartItemIdentifier;
@property (readonly, nonatomic) MPPlaceholderAVItem *tailPlaceholderItem;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (retain, nonatomic) id rtcSectionHierarchyToken;
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackContext:(id)a0;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (void)itemDidBeginPlayback:(id)a0;
- (BOOL)canJumpToItem:(id)a0;
- (BOOL)canSkipItem:(id)a0;
- (BOOL)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (void)updatePlaybackCoordinator:(id)a0;
- (BOOL)shouldRequestAdditionalItemsAtTail;
- (long long)prefetchThreshold;
- (BOOL)shouldShowPlaceholderAtTail;
- (void)loadAdditionalItemsIfNeededWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)updatePlaybackContext;
- (void)_buildPlaceholder;
- (void)_inLock_buildPlaceholder;
- (void)_updateRadioStationPlaybackAuthorizationTokenIfNeeded;

@end
