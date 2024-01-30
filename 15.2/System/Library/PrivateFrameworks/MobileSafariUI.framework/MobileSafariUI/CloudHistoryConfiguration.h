@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    BOOL _fetchedAssetData;
}

+ (id)sharedConfiguration;

- (id)platformBuiltInConfiguration;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (BOOL)shouldUseLongLivedOperationsToSaveRecords;
- (void).cxx_destruct;
- (id)init;
- (void)_reloadConfigurationDataIfNecessary;
- (id)remoteConfiguration;

@end
