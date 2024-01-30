@class NSString;

@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localDiagnosticsAgent;

- (id)_currentAsset;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id /* block */)a0;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id /* block */)a0;
- (void)captureDescriptionOfStatisticsWithResultHandler:(id /* block */)a0;
- (void)captureDescriptionOfUIState:(long long)a0 resultHandler:(id /* block */)a1;
- (void)dumpState:(long long)a0 toDirectoryURL:(id)a1 resultHandler:(id /* block */)a2;
- (void)setContentPrivacyState:(long long)a0 resultHandler:(id /* block */)a1;
- (void)setSystemAuthenticationType:(long long)a0 resultHandler:(id /* block */)a1;
- (void)timelineForWidgetSize:(id)a0 jsonFormat:(BOOL)a1 resultHandler:(id /* block */)a2;
- (id)_selectedAssets;
- (id)__currentTimestamp;
- (void)_captureCurrentAssetResourcesToDirectory:(id)a0 withResultHandler:(id /* block */)a1;
- (id)_currentAssetDetailedDescription;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetIdentifierUUID;
- (id)_currentAssetMetadata;
- (id)_currentAssetViewModelDescription;
- (id)_currentPrivacyController;
- (id)_descriptionForAllUIState;
- (id)_descriptionOfUIState:(long long)a0;
- (id)_selectedAssetIdentifiersDescription;
- (id)_selectedAssetUUIDsDescription;
- (id)_viewControllerHierarchyDescription;
- (id)_viewModelDescription;
- (id)_windowRecursiveDescription;

@end
