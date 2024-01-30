@class NSArray, NSMutableDictionary, NSMutableArray;

@interface OKSynopsisInterpreter : NSObject {
    NSMutableDictionary *_objectCreators;
    NSMutableDictionary *_objectComparators;
    NSMutableArray *_guidelineItems;
}

@property (retain, nonatomic) NSArray *synopsis;

- (void)dealloc;
- (id)objectViewsFromGuidelineSynopsisItems:(id)a0;
- (id)objectViewFromGuidelineSynopsisItem:(id)a0;
- (id)guidelineSynopsisItemFromObjectView:(id)a0;
- (id)initWithSynopsis:(id)a0;
- (BOOL)hasSynopsis;
- (id)allGuidelineSynopsisItems;
- (id)allObjectsFromGuidelineSynopsisItems;
- (void)registerCreatorForItemType:(unsigned long long)a0 initBlock:(id /* block */)a1;
- (void)registerComparatorForItemType:(unsigned long long)a0 compareBlock:(id /* block */)a1;
- (id)guidelineSynopsisItemsFromObjectViews:(id)a0;

@end
