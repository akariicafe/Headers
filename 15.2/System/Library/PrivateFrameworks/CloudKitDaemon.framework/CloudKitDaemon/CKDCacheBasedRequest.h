@class CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDOperation;

@interface CKDCacheBasedRequest : NSObject

@property (nonatomic) BOOL isCancelled;
@property (weak, nonatomic) CKDOperation *operation;
@property (weak, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) unsigned long long fetchBatchSize;

- (id)initWithOperation:(id)a0;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)performRequest;
- (id)spawnURLRequests;

@end
