@class FCPurchaseLookupRecordSource, NSArray, NSString, FCKeyValueStore, NFUnfairLock;
@protocol FCBundleChannelProviderDelegate, FCCoreConfigurationManager;

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType> {
    FCKeyValueStore *_localStore;
    NFUnfairLock *_accessLock;
    id<FCCoreConfigurationManager> _configurationManager;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
}

@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCBundleChannelProviderDelegate> delegate;

- (void)activityObservingApplicationWindowWillBecomeForeground;
- (void)loadInitialBundleChannelIDsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
