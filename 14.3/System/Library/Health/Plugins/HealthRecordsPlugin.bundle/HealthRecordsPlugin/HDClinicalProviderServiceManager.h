@class NSURLSession, HDHealthRecordsProfileExtension, HDProfile, NSOperationQueue, NSString, NSDate;

@interface HDClinicalProviderServiceManager : NSObject {
    NSOperationQueue *_taskScheduleQueue;
    NSOperationQueue *_searchQueue;
    NSURLSession *_URLSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _addOperationLock;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSString *currentSearchSessionID;
@property (readonly, copy, nonatomic) NSDate *currentSearchSessionIDMaxLifetime;
@property (copy, nonatomic) id /* block */ unitTesting_didAddOperationToTaskScheduleQueue;

- (id)initWithProfileExtension:(id)a0;
- (void)fetchRemoteGatewayWithExternalID:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteProviderWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_searchResultsPageWithOnlySupportedSearchResultsInSearchResultsPage:(id)a0;
- (void)fetchLogoDataForBrand:(id)a0 scaleKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCountryCodeSupported:(id)a0;
- (void)addOperationUnlessAlreadyEnqueued:(id)a0;
- (void)_addOperationWithBlock:(id /* block */)a0;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)_insertOrUpdateGatewayIfSupported:(id)a0 error:(id *)a1;
- (void)fetchRemoteSearchResultsPageForQuery:(id)a0 latitude:(id)a1 longitude:(id)a2 from:(long long)a3 completion:(id /* block */)a4;
- (void)unitTesting_markSessionIDExpired;
- (id)_allSupportedCountryCodes;
- (id)_createURLForSearchQuery:(id)a0 latitude:(id)a1 longitude:(id)a2 from:(long long)a3 error:(id *)a4;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)a0;
- (void)fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)_fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (id)remoteGatewaysWithBatchID:(id)a0 externalIDs:(id)a1 error:(id *)a2;
- (void)_createSessionIDIfNeeded;
- (id)createUpdateGatewaysOperationsForAccounts:(id)a0;
- (id)_supportedGatewaysFromFetchedJSONObject:(id)a0 externalIDs:(id)a1 error:(id *)a2;

@end
