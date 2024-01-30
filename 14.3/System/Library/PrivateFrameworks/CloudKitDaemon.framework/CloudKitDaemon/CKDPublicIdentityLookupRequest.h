@class NSArray, NSMutableArray, CKDDiscoverUserIdentitiesURLRequest;

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest

@property (retain, nonatomic) NSArray *originalLookupInfosToFetch;
@property (retain, nonatomic) NSMutableArray *lookupInfosToFetch;
@property (retain, nonatomic) CKDDiscoverUserIdentitiesURLRequest *request;
@property (copy, nonatomic) id /* block */ perLookupInfoProgressBlock;
@property (copy, nonatomic) id /* block */ lookupCompletionBlock;

+ (void)removeCacheForLookupInfos:(id)a0 inCache:(id)a1;

- (id)CKPropertiesDescription;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)ckShortDescription;
- (id)description;
- (void)performRequest;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;
- (void)_receivedUserIdentity:(id)a0 forLookupInfo:(id)a1 error:(id)a2;
- (BOOL)_tryComplete;
- (id)spawnURLRequests;
- (id)_generateOONPrivateKeyWithError:(id *)a0;
- (void)_saveUserIdentity:(id)a0 forLookupInfo:(id)a1;

@end
