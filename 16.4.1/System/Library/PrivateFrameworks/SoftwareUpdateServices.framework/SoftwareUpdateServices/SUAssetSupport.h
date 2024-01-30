@interface SUAssetSupport : NSObject

+ (void)purgeMSUUpdate:(id /* block */)a0;
+ (id)OSVersionComponent:(unsigned long long)a0 osVersion:(id)a1;
+ (id)minorOSVersion:(id)a0;
+ (void)_cleanupAllAssetsOfType:(id)a0;
+ (id)_gestaltValueForKey:(struct __CFString { } *)a0;
+ (void)_queue_cleanupAllInstalledAssetsOfType:(id)a0;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)a0 descriptor:(id)a1 priority:(int)a2 forBrain:(BOOL)a3;
+ (void)cleanupAllInstalledAssets:(id /* block */)a0;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (id)copyInstalledAssets;
+ (id)copySUAssetForAssetID:(id)a0;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)a0;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)a0 exactAssetIdMatch:(BOOL)a1 installedOnly:(BOOL)a2;
+ (id)copySuAssetInstalledExactlyMatchingDescriptor:(id)a0;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)a0;
+ (id)filterSuAssets:(id)a0 MatchingDescriptor:(id)a1;
+ (id)findAssetWithMatcher:(id)a0 localSearch:(BOOL)a1 error:(id *)a2;
+ (id)findAssetWithMatcher:(id)a0 localSearch:(BOOL)a1 releaseDate:(id *)a2 error:(id *)a3;
+ (id)findExactMatchInAssets:(id)a0 forAssetId:(id)a1;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)a0;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id *)a0;
+ (id)queryMetaDataOfType:(id)a0 WithFilter:(id)a1 installedOnly:(BOOL)a2 error:(id *)a3;
+ (long long)requestCatalogDownload:(id)a0;
+ (void)setAssetQueryFilters:(id)a0;
+ (void)setSUFilters:(id)a0;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)a0 withReleaseDate:(id)a1;
+ (BOOL)updateIsPreCRelease:(id)a0;

@end
