@class NSObject, NSString, NSArray, NSMutableDictionary, PGGraph, PHPhotoLibrary, PGCurationManager;
@protocol OS_os_log;

@interface PGBirthdayContextualRule : NSObject <PGContextualRule> {
    NSArray *_availablePersons;
    NSMutableDictionary *_personNodeByLocalIdentifier;
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    PGCurationManager *_curationManager;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 withOptions:(id)a1 modelReader:(id)a2 curationContext:(id)a3 usingBlock:(id /* block */)a4;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1 curationManager:(id)a2 loggingConnection:(id)a3;
- (id)_filterCuratedAssets:(id)a0 forHighlightItem:(id)a1;
- (id)_fetchCuratedAssetsForHighlightItem:(id)a0 intersectingAssets:(id)a1;
- (id)_bestAssetInCuratedAssets:(id)a0 forPerson:(id)a1 contextualScore:(out double *)a2;
- (id)_bestBirthdayCelebrationAssetForHighlightNode:(id)a0 assetCollection:(id)a1 curationContext:(id)a2;

@end
