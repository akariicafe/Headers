@class NSString, NSDictionary, PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLLimitedLibraryFetchFilter *_fetchFilter;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSString *_fetchFilterClientIdentifier;
    NSDictionary *_fetchFilterEntityNameToPredicateMap;
    NSNumber *_fetchFilterEnabledStatus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchFilterLock;
}

- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)processRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForRelationshipWithName:(id)a0 onObjectWithID:(id)a1 fromClientWithContext:(id)a2 error:(id *)a3;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:(id)a0;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)initWithConnectionAuthorization:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)limitedLibraryFetchFiltersUpdated:(id)a0;
- (id)processFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)_restrictedEntityNamesAllowedForContext:(id)a0;

@end
