@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>

- (void)sysdiagnoseInformationWithCompletion:(id /* block */)a0;
- (void)setTrialUseDefaultFiles:(BOOL)a0 completion:(id /* block */)a1;
- (void)abGroupInfoWithCompletion:(id /* block */)a0;
- (void)trialOverridePath:(id)a0 namespaceName:(id)a1 factorName:(id)a2 completion:(id /* block */)a3;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0 completion:(id /* block */)a1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(id /* block */)a0;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(id /* block */)a0;
- (void)downloadAssetMetadataWithCompletion:(id /* block */)a0;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)assetVersionsWithCompletion:(id /* block */)a0;

@end
