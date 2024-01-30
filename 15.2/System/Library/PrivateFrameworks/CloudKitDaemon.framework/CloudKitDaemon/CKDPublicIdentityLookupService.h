@class CKDKeyValueDiskCache, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDContainer *container;

- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (void)removeCacheForLookupInfos:(id)a0;
- (void)scheduleRequest:(id)a0 forOperation:(id)a1;
- (void)configureRequest:(id)a0 parentOperation:(id)a1;

@end
