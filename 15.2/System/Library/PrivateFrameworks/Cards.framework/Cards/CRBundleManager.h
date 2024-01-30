@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CRBundleManager : NSObject {
    NSMutableSet *_bundles;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
+ (id)bundleDirectoryName;
+ (Class)bundleClass;
+ (id)bundleDirectoryPath;

- (void).cxx_destruct;
- (id)init;
- (void)getBundlesWithCompletion:(id /* block */)a0;
- (void)_getBundlesOnCurrentQueueWithCompletion:(id /* block */)a0;

@end
