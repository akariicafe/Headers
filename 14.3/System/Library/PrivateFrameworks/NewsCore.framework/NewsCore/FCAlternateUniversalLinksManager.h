@class NSString, NSURL, FCKeyValueStore, FCBundlePurchaseIDsFetchedValueManager, FCAASAFileManager, FCBoostableOperationThrottler, FCBundleSubscriptionManager, FCFetchedValueManager;
@protocol FCContentContext;

@interface FCAlternateUniversalLinksManager : NSObject <FCAppActivityObserving, FCBoostableOperationThrottlerDelegate, FCFetchedValueManagerObserving>

@property (readonly, copy, nonatomic) NSURL *containerDirectoryFileURL;
@property (readonly, copy, nonatomic) NSString *alternateAssetsDirectoryName;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCBundleSubscriptionManager *bundleSubscriptionManager;
@property (readonly, nonatomic) FCAASAFileManager *fileManager;
@property (readonly, nonatomic) FCBundlePurchaseIDsFetchedValueManager *bundlePurchaseIDsManager;
@property (readonly, nonatomic) FCFetchedValueManager *fileManifestManager;
@property (readonly, nonatomic) FCKeyValueStore *lastWrittenManifestStore;
@property (readonly, nonatomic) FCBoostableOperationThrottler *updateThrottler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (id)initWithContainerDirectoryFileURL:(id)a0 appActivityMonitor:(id)a1 alternateAssetsDirectoryName:(id)a2 contentContext:(id)a3 purchaseController:(id)a4 bundleSubscriptionManager:(id)a5;
- (void)updateWithCompletionHandler:(id /* block */)a0;
- (void)operationThrottler:(id)a0 performAsyncOperationWithQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)fetchedObjectManager:(id)a0 valueDidChange:(id)a1;

@end
