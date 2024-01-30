@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy

+ (BOOL)_assetsUsedInLastSixMonths;
+ (BOOL)_soundSwitchesEnabled;

- (id)assetType;
- (id)maxSupportedFormatVersion;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)minSupportedFormatVersion;

@end
