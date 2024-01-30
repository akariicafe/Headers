@class NSString, MPPropertySet, MPMutableSectionedCollection, NSMutableDictionary, MPCModelStorePlaybackItemsRequest, MPSectionedCollection, MPServerObjectDatabase, NSMutableArray, NSMutableOrderedSet, NSMutableSet;

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
    NSMutableSet *_failedStoreIDs;
    long long _storePersonalizationStyle;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })handleResponse:(id)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (struct _MPCModelStorePlaybackItemEligibility { BOOL x0; long long x1; })_eligibilityForItem:(id)a0;
- (id)_playlistEntryForObject:(id)a0 containerUniqueID:(id)a1;
- (id)_userIdentityWithRequest:(id)a0;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)a0 propertySet:(id)a1;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)a0 forIndexPath:(id)a1;
- (id)newStoreItemMetadataRequest;

@end
