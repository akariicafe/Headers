@class NSString, NSArray, NSMutableDictionary, NSNumberFormatter, NSMutableArray, NSMutableOrderedSet, NSMapTable, KNSlideNode;

@interface KNSlideTree : TSPContainedObject <KNSlideCollection> {
    NSMutableOrderedSet *_slideNodes;
    NSMutableDictionary *_slideNodesForUniqueIdentifiersCache;
    NSMutableDictionary *_slideNodesForFormulaReferenceNamesCache;
    NSMapTable *_formulaReferenceNamesForSlideNodesCache;
}

@property (retain, nonatomic) NSMutableArray *displayedSlideNodes;
@property (retain) NSNumberFormatter *formatter;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *slideNodes;
@property (readonly, nonatomic) NSArray *visibleSlideNodes;
@property (readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 minimumValidDepth:(unsigned long long)a1 canExceedSlideTreeMaxDepth:(BOOL)a2;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 atDepths:(id)a1 minimumValidDepth:(unsigned long long)a2 canExceedSlideTreeMaxDepth:(BOOL)a3;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 minimumValidDepth:(unsigned long long)a1;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 atDepths:(id)a1 minimumValidDepth:(unsigned long long)a2;
+ (BOOL)areMultipleMasterTypesInCollection:(id)a0;

- (void)removeAll;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)dealloc;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 owner:(id)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)formulaReferenceNameForSlideNode:(id)a0;
- (id)slideNodeForFormulaReferenceName:(id)a0 caseSensitive:(BOOL)a1;
- (id)slideNamesMatchingPrefix:(id)a0;
- (void)invalidateSlideNameCache;
- (unsigned long long)slideNumberForSlideNode:(id)a0;
- (void)addSlideNode:(id)a0 atDepth:(unsigned long long)a1 dolcContext:(id)a2;
- (BOOL)containsSlideNode:(id)a0;
- (unsigned long long)indexOfSlideNode:(id)a0;
- (id)slideNodeAtIndex:(unsigned long long)a0 ignoreHiddenNodes:(BOOL)a1;
- (id)slideNodeAfterSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (id)slideNodeBeforeSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (id)childrenOfSlideNode:(id)a0;
- (id)descendantsOfSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (void)addSlideNodeForDocumentUpgrade:(id)a0 atDepth:(unsigned long long)a1;
- (void)p_clearSlideNodeCache;
- (BOOL)slideNodeIsDisplayed:(id)a0;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)a0;
- (void)p_cacheSlideNodes;
- (id)slidesUsingTemplateSlide:(id)a0;
- (id)parentOfSlideNode:(id)a0;
- (id)orderedSlideNodesInSelection:(id)a0;
- (void)insertSlideNodes:(id)a0 atIndexes:(id)a1 slideNodesChangingDepths:(id)a2 depthsOfSlideNodesChangingDepths:(id)a3 dolcContext:(id)a4;
- (void)moveSlideNodes:(id)a0 fromIndexes:(id)a1 toIndexes:(id)a2 slideNodesChangingDepths:(id)a3 depthsOfSlideNodesChangingDepths:(id)a4;
- (void)removeSlideNodes:(id)a0 atIndexes:(id)a1 slideNodesChangingDepths:(id)a2 depthsOfSlideNodesChangingDepths:(id)a3;
- (void)reloadDisplayedNodes;
- (id)unhiddenSlideNodeAtIndex:(unsigned long long)a0;
- (id)slideNodeWithUniqueIdentifier:(id)a0;
- (unsigned long long)visiblePageCountIsSeparatedByBuilds:(BOOL)a0;
- (unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)a0 andEventIndex:(unsigned long long)a1;
- (void)slideIndex:(unsigned long long *)a0 andEventIndex:(unsigned long long *)a1 forByBuildPageIndex:(unsigned long long)a2;
- (unsigned long long)numberOfSlidesUsingTemplateSlide:(id)a0;
- (id)slideNodesInAscendingOrder:(id)a0;

@end
