@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)maxSupportedFormatVersion;
- (id)assetType;
- (id)minSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
