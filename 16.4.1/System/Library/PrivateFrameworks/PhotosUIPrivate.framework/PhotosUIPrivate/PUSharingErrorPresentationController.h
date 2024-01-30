@class NSDictionary;

@interface PUSharingErrorPresentationController : PUErrorPresentationController

@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) long long preparationType;
@property (copy, nonatomic) NSDictionary *itemSourcesByAssetUUID;

+ (id)_mediaSpecificMessageForKeyPrefix:(id)a0 forAssets:(id)a1;
+ (id)_defaultTitleForDownloadErrorForAssets:(id)a0 forSource:(unsigned long long)a1;
+ (id)_defaultTitleForSource:(unsigned long long)a0 assets:(id)a1;
+ (BOOL)errorIsDownloadError:(id)a0;
+ (BOOL)errorIsLowDiskSpaceError:(id)a0;
+ (BOOL)errorIsUserNeedsReviewCloudSettingsError:(id)a0;
+ (long long)errorTypeFromSimulatedErrorType:(long long)a0;
+ (long long)sharingErrorTypeFromError:(id)a0;

- (void).cxx_destruct;
- (id)additionalRadarDescriptionLinesForAsset:(id)a0;
- (void)configureAlertPropertiesFromError:(id)a0 withAssets:(id)a1 willShowFileRadarButton:(BOOL)a2 alertCompletion:(id /* block */)a3;
- (void)configureRadarPropertiesFromError:(id)a0 withAssets:(id)a1;
- (id)initWithErrors:(id)a0 forAssets:(id)a1 fromSource:(unsigned long long)a2 preparationType:(long long)a3;
- (BOOL)shouldIncludeAssetInRadarDescription:(id)a0;
- (BOOL)shouldShowFileRadarAction;

@end
