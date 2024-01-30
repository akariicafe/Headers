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

+ (BOOL)areMultipleMasterTypesInCollection:(id)a0;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 atDepths:(id)a1 minimumValidDepth:(unsigned long long)a2;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 atDepths:(id)a1 minimumValidDepth:(unsigned long long)a2 canExceedSlideTreeMaxDepth:(BOOL)a3;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 minimumValidDepth:(unsigned long long)a1;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)a0 minimumValidDepth:(unsigned long long)a1 canExceedSlideTreeMaxDepth:(BOOL)a2;

- (id)objectEnumerator;
- (void)dealloc;
- (void)removeAll;
- (id)initWithOwner:(id)a0;
- (void).cxx_destruct;
- (void)addSlideNode:(id)a0 atDepth:(unsigned long long)a1 dolcContext:(id)a2;
- (void)addSlideNodeForDocumentUpgrade:(id)a0 atDepth:(unsigned long long)a1;
- (unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)a0 andEventIndex:(unsigned long long)a1;
- (id)childrenOfSlideNode:(id)a0;
- (BOOL)containsSlideNode:(id)a0;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)a0;
- (id)descendantsOfSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (id)formulaReferenceNameForSlideNode:(id)a0;
- (unsigned long long)indexOfSlideNode:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 owner:(id)a2;
- (void)insertSlideNodes:(id)a0 atIndexes:(id)a1 slideNodesChangingDepths:(id)a2 depthsOfSlideNodesChangingDepths:(id)a3 dolcContext:(id)a4;
- (void)invalidateSlideNameCache;
- (void)moveSlideNodes:(id)a0 fromIndexes:(id)a1 toIndexes:(id)a2 slideNodesChangingDepths:(id)a3 depthsOfSlideNodesChangingDepths:(id)a4;
- (unsigned long long)numberOfSlidesUsingTemplateSlide:(id)a0;
- (id)orderedSlideNodesInSelection:(id)a0;
- (void)p_cacheSlideNodes;
- (void)p_clearSlideNodeCache;
- (id)parentOfSlideNode:(id)a0;
- (void)reloadDisplayedNodes;
- (void)removeSlideNodes:(id)a0 atIndexes:(id)a1 slideNodesChangingDepths:(id)a2 depthsOfSlideNodesChangingDepths:(id)a3;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)slideIndex:(unsigned long long *)a0 andEventIndex:(unsigned long long *)a1 forByBuildPageIndex:(unsigned long long)a2;
- (id)slideNamesMatchingPrefix:(id)a0;
- (id)slideNodeAfterSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (id)slideNodeAtIndex:(unsigned long long)a0 ignoreHiddenNodes:(BOOL)a1;
- (id)slideNodeBeforeSlideNode:(id)a0 omitSkippedSlideNodes:(BOOL)a1 omitCollapsedSlideNodes:(BOOL)a2;
- (id)slideNodeForFormulaReferenceName:(id)a0 caseSensitive:(BOOL)a1;
- (BOOL)slideNodeIsDisplayed:(id)a0;
- (id)slideNodeWithUniqueIdentifier:(id)a0;
- (id)slideNodesInAscendingOrder:(id)a0;
- (unsigned long long)slideNumberForSlideNode:(id)a0;
- (id)slidesUsingTemplateSlide:(id)a0;
- (id)unhiddenSlideNodeAtIndex:(unsigned long long)a0;
- (unsigned long long)visiblePageCountIsSeparatedByBuilds:(BOOL)a0;

@end
