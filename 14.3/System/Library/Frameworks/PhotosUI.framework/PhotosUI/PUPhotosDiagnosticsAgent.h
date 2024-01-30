@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>

+ (id)localDiagnosticsAgent;

- (id)_currentAssetMetadata;
- (id)_descriptionOfUIState:(long long)a0;
- (void)captureDescriptionOfStatisticsWithResultHandler:(id /* block */)a0;
- (id)_viewControllerHierarchyDescription;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id /* block */)a0;
- (id)_windowRecursiveDescription;
- (id)_viewModelDescription;
- (id)_currentAsset;
- (id)__currentTimestamp;
- (void)captureDescriptionOfUIState:(long long)a0 resultHandler:(id /* block */)a1;
- (void)timelineForWidgetSize:(id)a0 resultHandler:(id /* block */)a1;
- (id)_descriptionForAllUIState;
- (id)_currentAssetDetailedDescription;
- (void)dumpState:(long long)a0 toDirectoryURL:(id)a1 resultHandler:(id /* block */)a2;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id /* block */)a0;
- (void)_captureCurrentAssetResourcesToDirectory:(id)a0 withResultHandler:(id /* block */)a1;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetViewModelDescription;

@end
