@class MPStoreModelGenericObjectBuilder, ICUserIdentity, NSArray, MPMutableSectionedCollection, NSMutableDictionary, NSDictionary, MPSectionedCollection, NSMutableArray, MPCModelStorePlaybackItemsRequest;

@interface MPCModelStorePlaybackItemsRequestAccumulatorLegacy : NSObject {
    long long _currentBatchCount;
    long long _defaultLibraryPersonalizationStyle;
    NSMutableDictionary *_equivalencyMapping;
    BOOL _lastStoreIDBasedSectionWasPlaylist;
    NSArray *_orderedStoreIDs;
    NSMutableArray *_pendingOrderedStoreIDs;
    NSMutableArray *_pendingPrioritizedStoreIDs;
    NSMutableArray *_unprocessedItemIdentifiers;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSMutableDictionary *_receivedStoreIDs;
    MPStoreModelGenericObjectBuilder *_resultsGenericObjectBuilder;
    NSMutableDictionary *_sectionIndexToDeletedIndexSet;
    NSMutableDictionary *_storeIDToIndexPathReference;
    long long _unknownEndpointLibraryPersonalizationStyle;
    ICUserIdentity *_userIdentity;
    BOOL _allowsExplicitContent;
    MPCModelStorePlaybackItemsRequest *_request;
    BOOL _shouldLibraryPersonalize;
    long long _storePersonalizationStyle;
}

@property (readonly, copy, nonatomic) NSDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })handleResponse:(id)a0;
- (void).cxx_destruct;
- (struct _MPCModelStorePlaybackItemEligibility { BOOL x0; long long x1; })_eligibilityForItem:(id)a0;
- (id)_userIdentityWithRequest:(id)a0;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (id)newStoreItemMetadataRequest;
- (id)initWithRequest:(id)a0 shouldLibraryPersonalize:(BOOL)a1;
- (void)_prepareRequestInformation;
- (id)_originalIndexPathsForStoreID:(id)a0;
- (BOOL)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)a0;
- (id)_modelObjectWithStoreItemMetadata:(id)a0 requestModelObject:(id)a1 shouldUsePlaylistEntries:(BOOL)a2;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)a0;
- (void)_removeItemAtOriginalIndexPath:(id)a0;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)a0;
- (void)_addOriginalIndexPath:(id)a0 forStoreID:(id)a1;

@end
