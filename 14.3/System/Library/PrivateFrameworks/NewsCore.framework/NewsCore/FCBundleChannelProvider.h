@class FCKeyValueStore, NSArray, NSString, FCPurchaseLookupRecordSource, NFUnfairLock;
@protocol FCBundleChannelProviderDelegate, FCCoreConfigurationManager;

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType>

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) NFUnfairLock *accessLock;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCBundleChannelProviderDelegate> delegate;

- (void)refreshBundleChannelIDsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateBundleChannelIDs:(id)a0 bundleChannelIDsVersion:(id)a1;
- (void)activityObservingApplicationWindowWillBecomeForeground;
- (void)loadInitialBundleChannelIDsWithCompletion:(id /* block */)a0;
- (void)loadLocalCachesFromStore;
- (void)fetchBundleTagIDsForPurchaseID:(id)a0 completion:(id /* block */)a1;
- (id)initWithLocalStore:(id)a0 appActivityMonitor:(id)a1 configurationManager:(id)a2 purchaseLookupRecordSource:(id)a3;

@end
