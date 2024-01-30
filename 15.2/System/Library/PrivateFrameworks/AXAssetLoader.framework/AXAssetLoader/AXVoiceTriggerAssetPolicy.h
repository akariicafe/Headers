@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy

+ (BOOL)_assetsUsedInLastSixMonths;
+ (BOOL)_soundSwitchesEnabled;

- (id)maxSupportedFormatVersion;
- (id)assetType;
- (id)minSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;

@end
