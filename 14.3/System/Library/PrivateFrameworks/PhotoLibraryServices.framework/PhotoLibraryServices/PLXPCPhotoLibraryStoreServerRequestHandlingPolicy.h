@class NSString, NSDictionary, PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLLimitedLibraryFetchFilter *_fetchFilter;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSString *_fetchFilterClientIdentifier;
    NSDictionary *_fetchFilterEntityNameToPredicateMap;
    NSNumber *_fetchFilterEnabledStatus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchFilterLock;
}

- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)a0;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)_restrictedEntityNamesAllowedForContext:(id)a0;
- (id)initWithConnectionAuthorization:(id)a0;
- (void)limitedLibraryFetchFiltersUpdated:(id)a0;

@end
