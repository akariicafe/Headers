@class NSString, NSMutableSet, NSObject;
@protocol DDSManaging, DDSAssetObserving, DDSAssetProviding, OS_dispatch_queue;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSAssetObservingDelegate>

@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSManaging> managerInterface;
@property (readonly, nonatomic) NSMutableSet *delegates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)assertionIDsForClientID:(id)a0;
- (id)initWithProvider:(id)a0 managerInterface:(id)a1;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (id)assetsForQuery:(id)a0 error:(id *)a1;
- (void)registerDelegate:(id)a0;
- (void)triggerDump;
- (void).cxx_destruct;
- (void)unregisterDelegate:(id)a0;
- (void)addAssertionForAssetsWithQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (id)init;
- (void)triggerUpdate;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (void)removeAssertionWithIdentifier:(id)a0;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;

@end
