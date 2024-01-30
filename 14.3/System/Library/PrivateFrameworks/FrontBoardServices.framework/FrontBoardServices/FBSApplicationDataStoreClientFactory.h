@class NSArray, NSObject;
@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreClientFactory : NSObject {
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id<FBSApplicationDataStoreRepositoryClient> _sharedClient;
}

@property (retain, nonatomic) NSArray *prefetchedKeys;

+ (id)sharedInstance;
+ (BOOL)isServerProcess;

- (void)checkin;
- (id)init;
- (void).cxx_destruct;
- (id)checkout;

@end
