@class CKDKeyValueDiskCache, CKDClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDClientContext *context;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)removeCacheForLookupInfos:(id)a0;
- (void)scheduleRequest:(id)a0 forOperation:(id)a1;
- (void)configureRequest:(id)a0 parentOperation:(id)a1;

@end
