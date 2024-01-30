@interface PLSpotlightTranslatorUtilities : NSObject

+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1;
+ (id)spotlightPersonsFromPLPersons:(id)a0;
+ (id)contentRatingFromScenes:(id)a0 algorithmVersion:(short)a1;
+ (id)seasonsForDates:(id)a0 calendar:(id)a1 locale:(id)a2 synonymsBySeason:(id)a3;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1;
+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1 synonymSearchIndexCategoryMask:(unsigned long long)a2 synonyms:(id)a3;

@end
