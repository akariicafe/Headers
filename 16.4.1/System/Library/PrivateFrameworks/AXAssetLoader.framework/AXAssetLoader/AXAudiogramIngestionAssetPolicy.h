@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy

- (id)assetType;
- (BOOL)_assetsUsedInLastSixMonths;
- (id)maxSupportedFormatVersion;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)minSupportedFormatVersion;

@end
