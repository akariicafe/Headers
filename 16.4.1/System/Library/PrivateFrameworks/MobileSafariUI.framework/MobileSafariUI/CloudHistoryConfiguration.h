@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    BOOL _fetchedAssetData;
}

+ (id)sharedConfiguration;

- (id)platformBuiltInConfiguration;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (void)_reloadConfigurationDataIfNecessary;
- (BOOL)shouldUseLongLivedOperationsToSaveRecords;
- (id)init;
- (id)remoteConfiguration;
- (void).cxx_destruct;

@end
