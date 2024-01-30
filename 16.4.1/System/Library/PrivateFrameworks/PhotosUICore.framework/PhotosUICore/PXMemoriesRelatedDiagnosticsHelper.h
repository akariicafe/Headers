@interface PXMemoriesRelatedDiagnosticsHelper : NSObject

+ (id)_curationFullsetForMemory:(id)a0;
+ (id)_datesAndAssetCountDictionaryForAssetCollection:(id)a0;
+ (id)_featureVectorInfoGroupedByKeyForFeatureVector:(id)a0;
+ (id)_isSafeForWidgetDisplayForAssetUUID:(id)a0;
+ (id)_sanitizedGraphDataDictionaryForArchivingDictionary:(id)a0 memoryLocalIdentifier:(id)a1;
+ (id)_userFeedbackScoreInfoForMemory:(id)a0;
+ (BOOL)generateSectionTitles:(out id *)a0 andTableContent:(out id *)a1 forIndex:(long long)a2 sourceMemory:(id)a3 sourceDictionary:(id)a4;
+ (id)getSummaryFromProviderItem:(id)a0;
+ (id)preprocessDictionary:(id)a0 forMemoryWithLocalIdentifier:(id)a1 algorithmsVersion:(long long)a2 inPhotoLibrary:(id)a3;

@end
