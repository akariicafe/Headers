@interface PLSpotlightHighlightTranslator : NSObject

+ (id)_personsFromGraphData:(id)a0 photoLibrary:(id)a1;
+ (id)_scenesFromGraphData:(id)a0 sceneTaxonomyProvider:(id)a1;
+ (id)_seasonsForHighlight:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2;
+ (id)spotlightSearchableItemFromHighlight:(id)a0 graphData:(id)a1 searchConfiguration:(id)a2;

@end
