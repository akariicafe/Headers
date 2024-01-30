@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy

- (id)maxSupportedFormatVersion;
- (id)assetType;
- (id)minSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (BOOL)_assetsUsedInLastSixMonths;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;

@end
