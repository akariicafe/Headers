@class NSError, NSString, MPPropertySet, MPMutableSectionedCollection, NSMutableDictionary, MPCModelStorePlaybackItemsRequest, MPSectionedCollection, MPServerObjectDatabase, NSMutableArray, NSMutableOrderedSet, ICURLAggregatedPerformanceMetrics;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

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
    NSMutableDictionary *_sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    NSMutableArray *_pendingCollectionItemAuthorizationTokenRequests;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> _trustProvider;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (readonly, nonatomic) NSError *accumulationError;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } accumulatorResult;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;

- (id)initWithRequest:(id)a0;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })handleResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (void)_addPendingChildItem:(id)a0 identifiers:(id)a1 atSectionIndex:(id)a2 collectionPlaybackAuthorizationToken:(id)a3 requestType:(long long)a4;
- (struct _MPCModelStorePlaybackItemEligibility { BOOL x0; long long x1; })_eligibilityForItem:(id)a0;
- (BOOL)_isFatalError:(id)a0;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)a0 forIndexPath:(id)a1;
- (id)_playlistEntryForObject:(id)a0 containerUniqueID:(id)a1;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (id)_updatedModelObjectFromOriginalObject:(id)a0 sectionPlaybackAuthorizationToken:(id)a1 itemSectionIndex:(long long)a2;
- (id)_userIdentityWithRequest:(id)a0;
- (id)handleMediaAPIResponse:(id)a0 trustID:(id)a1 isFinalResponse:(BOOL)a2;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)newMediaAPICollectionItemMetadataRequestInfo;
- (id)newStoreItemMetadataRequest;

@end
