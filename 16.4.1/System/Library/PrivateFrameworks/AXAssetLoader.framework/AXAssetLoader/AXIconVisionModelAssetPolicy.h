@interface AXIconVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
