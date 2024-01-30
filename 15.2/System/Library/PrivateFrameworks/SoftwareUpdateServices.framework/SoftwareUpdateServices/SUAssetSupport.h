@interface SUAssetSupport : NSObject

+ (BOOL)updateIsPreCRelease:(id)a0;
+ (void)_queue_cleanupAllInstalledAssetsOfType:(id)a0;
+ (void)setSUFilters:(id)a0;
+ (void)_cleanupAllAssetsOfType:(id)a0;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)findAssetWithMatcher:(id)a0 localSearch:(BOOL)a1 releaseDate:(id *)a2 error:(id *)a3;
+ (id)_gestaltValueForKey:(struct __CFString { } *)a0;
+ (long long)requestCatalogDownload:(id)a0;
+ (void)setAssetQueryFilters:(id)a0;
+ (id)findExactMatchInAssets:(id)a0 forAssetId:(id)a1;
+ (id)queryMetaDataOfType:(id)a0 WithFilter:(id)a1 installedOnly:(BOOL)a2 error:(id *)a3;
+ (id)filterSuAssets:(id)a0 MatchingDescriptor:(id)a1;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)a0 exactAssetIdMatch:(BOOL)a1 installedOnly:(BOOL)a2;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id *)a0;
+ (id)findAssetWithMatcher:(id)a0 localSearch:(BOOL)a1 error:(id *)a2;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)a0;
+ (id)minorOSVersion:(id)a0;
+ (id)OSVersionComponent:(unsigned long long)a0 osVersion:(id)a1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)a0 withReleaseDate:(id)a1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)a0;
+ (void)cleanupAllInstalledAssets:(id /* block */)a0;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (id)copySUAssetForAssetID:(id)a0;
+ (id)copyInstalledAssets;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)a0;
+ (id)copySuAssetInstalledExactlyMatchingDescriptor:(id)a0;
+ (void)purgeMSUUpdate:(id /* block */)a0;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)a0;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)a0 descriptor:(id)a1 priority:(int)a2 forBrain:(BOOL)a3;

@end
