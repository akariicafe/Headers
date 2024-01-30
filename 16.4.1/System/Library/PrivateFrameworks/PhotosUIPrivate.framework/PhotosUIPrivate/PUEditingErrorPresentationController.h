@interface PUEditingErrorPresentationController : PUErrorPresentationController

+ (id)_mediaSpecificMessageForKeyPrefix:(id)a0 forAssets:(id)a1;
+ (id)_hardwareModelSpecificMessageForKeyPrefix:(id)a0;
+ (long long)editingErrorTypeFromError:(id)a0;
+ (BOOL)errorIsDownloadError:(id)a0;

- (id)additionalRadarDescriptionLinesForAsset:(id)a0;
- (void)configureAlertPropertiesFromError:(id)a0 withAssets:(id)a1 willShowFileRadarButton:(BOOL)a2 alertCompletion:(id /* block */)a3;
- (void)configureRadarPropertiesFromError:(id)a0 withAssets:(id)a1;
- (id)initWithError:(id)a0 forAsset:(id)a1;
- (id)initWithErrors:(id)a0 forAssets:(id)a1;
- (BOOL)shouldShowFileRadarAction;

@end
