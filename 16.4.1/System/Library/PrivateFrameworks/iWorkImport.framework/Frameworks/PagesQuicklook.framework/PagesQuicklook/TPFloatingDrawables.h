@class NSMapTable, NSSet, NSArray, NSIndexSet, TPDocumentRoot, NSString, NSMutableDictionary;

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject, TSKModel> {
    NSMutableDictionary *_drawablesByPageIndex;
    NSMapTable *_pageIndexByDrawable;
    NSMapTable *_tagByDrawable;
}

@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL hasAnyDrawables;
@property (readonly, nonatomic) unsigned long long countOfAllDrawables;
@property (readonly, nonatomic) NSSet *allDrawables;
@property (readonly, nonatomic) NSArray *swift_allDrawables;
@property (readonly, nonatomic) NSIndexSet *pageIndexesOfPagesContainingDrawables;
@property (readonly, nonatomic) unsigned long long maximumPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)childEnumerator;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)removeDrawable:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)removeTagForDrawable:(id)a0;
- (id)drawableEnumerator;
- (id)tagForDrawable:(id)a0;
- (void)addDrawable:(id)a0 toPageIndex:(unsigned long long)a1 insertContext:(id)a2;
- (void)addDrawable:(id)a0 toPageIndex:(unsigned long long)a1 insertContext:(id)a2 suppressDOLC:(BOOL)a3;
- (void)addDrawables:(id)a0 toPageIndex:(unsigned long long)a1 insertContext:(id)a2;
- (void)applyTag:(id)a0 toDrawable:(id)a1;
- (id)drawablesOnPageIndex:(unsigned long long)a0;
- (void)moveDrawable:(id)a0 toPageIndex:(unsigned long long)a1;
- (id)orderedDrawablesOnPageIndex:(unsigned long long)a0;
- (void)p_addDrawable:(id)a0 toPageIndex:(unsigned long long)a1;
- (void)p_removeDrawable:(id)a0;
- (unsigned long long)pageIndexForDrawable:(id)a0;
- (void)removeDrawable:(id)a0 suppressDOLC:(BOOL)a1;
- (void)removeDrawables:(id)a0;
- (id)swift_drawablesOnPageIndex:(unsigned long long)a0;

@end
