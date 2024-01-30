@interface PLSpotlightAssetTranslator : NSObject

+ (id)_ocrTextForAsset:(id)a0;
+ (id)_personNamesForAsset:(id)a0;
+ (id)_publicEventPerformersForAsset:(id)a0 graphData:(id)a1;
+ (id)_mediaTypesForAsset:(id)a0;
+ (id)_seasonsForAsset:(id)a0 calendar:(id)a1 locale:(id)a2 synonymsBySeason:(id)a3;
+ (id)_publicEventNamesForAsset:(id)a0 graphData:(id)a1;
+ (id)_meaningsForAsset:(id)a0 graphData:(id)a1 synonyms:(id)a2;
+ (id)_publicEventCategoriesForAsset:(id)a0 graphData:(id)a1 synonyms:(id)a2;
+ (id)_businessCategoriesForAsset:(id)a0 graphData:(id)a1;
+ (id)_contentRatingForAsset:(id)a0;
+ (id)_personsForAsset:(id)a0;
+ (id)_holidaysForAsset:(id)a0 graphData:(id)a1;
+ (BOOL)_isOCRTextDonationEnabled;
+ (id)_scenesForAsset:(id)a0 sceneTaxonomy:(id)a1;
+ (id)_spotlightSearchableAttributesForAsset:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2;
+ (id)_debugOCRTextForAsset:(id)a0;
+ (id)_businessNamesForAsset:(id)a0 graphData:(id)a1;
+ (id)_locationNamesForAsset:(id)a0;
+ (id)spotlightSearchableItemFromAsset:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2 domainIdentifier:(id)a3;

@end
