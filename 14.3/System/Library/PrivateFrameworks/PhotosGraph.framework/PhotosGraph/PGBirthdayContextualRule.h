@class NSString, NSArray, NSMutableDictionary, PGGraph;

@interface PGBirthdayContextualRule : NSObject <PGContextualRule> {
    NSArray *_availablePersons;
    NSMutableDictionary *_personNodeByLocalIdentifier;
    PGGraph *_graph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 withOptions:(id)a1 modelReader:(id)a2 usingBlock:(id /* block */)a3;
- (id)_filterCuratedAssets:(id)a0 forHighlightItem:(id)a1;
- (id)_fetchCuratedAssetsForHighlightItem:(id)a0 intersectingAssets:(id)a1;
- (id)_bestAssetInCuratedAssets:(id)a0 forPerson:(id)a1 contextualScore:(out double *)a2;
- (id)_bestBirthdayCelebrationAssetForHighlightNode:(id)a0 assetCollection:(id)a1;

@end
