@class NSString, MPPropertySet, MPMutableSectionedCollection, NSMutableDictionary, MPCModelStorePlaybackItemsRequest, MPSectionedCollection, MPServerObjectDatabase, NSMutableArray, NSMutableOrderedSet;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    MPCModelStorePlaybackItemsRequest *_request;
    BOOL _requestUsesSectionedModelObjects;
    MPServerObjectDatabase *_sod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    BOOL _allowsExplicitContent;
    long long _defaultLibraryPersonalizationStyle;
    long long _unknownEndpointLibraryPersonalizationStyle;
    NSMutableOrderedSet *_pendingStoreIDs;
    long long _storePersonalizationStyle;
    NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; } accumulatorResult;

- (id)initWithRequest:(id)a0;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; })handleResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)handleMediaAPIResponse:(id)a0 trustID:(id)a1 isFinalResponse:(BOOL)a2;
- (id)newStoreItemMetadataRequest;
- (id)newMediaAPICollectionItemMetadataRequestInfo;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (struct _MPCModelStorePlaybackItemEligibility { BOOL x0; long long x1; })_eligibilityForItem:(id)a0;
- (id)_updatedModelObjectFromOriginalObject:(id)a0 sectionPlaybackAuthorizationToken:(id)a1 itemSectionIndex:(long long)a2;
- (id)_playlistEntryForObject:(id)a0 containerUniqueID:(id)a1;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (void)_addPendingChildItem:(id)a0 identifiers:(id)a1 atSectionIndex:(id)a2 collectionPlaybackAuthorizationToken:(id)a3 requestType:(unsigned long long)a4;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)a0 propertySet:(id)a1;
- (id)_newIdentifierSetFromOriginalIdentifierSet:(id)a0 playbackAuthorizationToken:(id)a1;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)a0 forIndexPath:(id)a1;
- (id)_userIdentityWithRequest:(id)a0;

@end
