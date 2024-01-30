@interface PUEditingErrorPresentationController : PUErrorPresentationController

+ (BOOL)errorIsDownloadError:(id)a0;
+ (id)_hardwareModelSpecificMessageForKeyPrefix:(id)a0;
+ (id)_mediaSpecificMessageForKeyPrefix:(id)a0 forAsset:(id)a1;
+ (long long)editingErrorTypeFromError:(id)a0;

- (BOOL)shouldShowFileRadarAction;
- (id)additionalRadarDescriptionLinesForAsset:(id)a0;
- (void)configureRadarPropertiesFromError:(id)a0 withAssets:(id)a1;
- (void)configureAlertPropertiesFromError:(id)a0 withAssets:(id)a1 willShowFileRadarButton:(BOOL)a2 alertCompletion:(id /* block */)a3;
- (id)initWithError:(id)a0 forAsset:(id)a1;

@end
