@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>

+ (id)localDiagnosticsAgent;

- (id)__currentTimestamp;
- (id)_currentAssetViewModelDescription;
- (id)_descriptionForAllUIState;
- (void)captureDescriptionOfUIState:(long long)a0 resultHandler:(id /* block */)a1;
- (void)captureDescriptionOfStatisticsWithResultHandler:(id /* block */)a0;
- (id)_currentAsset;
- (void)_captureCurrentAssetResourcesToDirectory:(id)a0 withResultHandler:(id /* block */)a1;
- (void)dumpState:(long long)a0 toDirectoryURL:(id)a1 resultHandler:(id /* block */)a2;
- (id)_selectedAssetIdentifiersDescription;
- (id)_currentAssetMetadata;
- (id)_currentAssetDetailedDescription;
- (id)_currentAssetIdentifierUUID;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id /* block */)a0;
- (id)_viewModelDescription;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id /* block */)a0;
- (id)_selectedAssets;
- (id)_currentAssetIdentifierDescription;
- (void)timelineForWidgetSize:(id)a0 jsonFormat:(BOOL)a1 resultHandler:(id /* block */)a2;
- (id)_windowRecursiveDescription;
- (id)_descriptionOfUIState:(long long)a0;
- (id)_selectedAssetUUIDsDescription;
- (id)_viewControllerHierarchyDescription;

@end
