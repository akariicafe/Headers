@class CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDOperation;

@interface CKDCacheBasedRequest : NSObject

@property (nonatomic) BOOL isCancelled;
@property (weak, nonatomic) CKDOperation *operation;
@property (weak, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) unsigned long long fetchBatchSize;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (void)performRequest;
- (id)spawnURLRequests;

@end
