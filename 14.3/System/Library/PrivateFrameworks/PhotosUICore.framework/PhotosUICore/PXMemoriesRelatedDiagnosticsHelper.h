@interface PXMemoriesRelatedDiagnosticsHelper : NSObject

+ (id)preprocessDictionary:(id)a0 forMemoryWithLocalIdentifier:(id)a1 algorithmsVersion:(unsigned short)a2 inPhotoLibrary:(id)a3;
+ (BOOL)generateSectionTitles:(out id *)a0 andTableContent:(out id *)a1 forIndex:(long long)a2 sourceMemory:(id)a3 sourceDictionary:(id)a4;
+ (id)getSummaryFromProviderItem:(id)a0;
+ (id)_sanitizedGraphDataDictionaryForArchivingDictionary:(id)a0 memoryLocalIdentifier:(id)a1;
+ (id)_featureVectorInfoGroupedByKeyForFeatureVector:(id)a0;
+ (id)_datesAndAssetCountDictionaryForAssetCollection:(id)a0;
+ (id)_curationFullsetForMemory:(id)a0;

@end
