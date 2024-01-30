@class NSArray;

@interface SearchUITableModel : NSObject

@property (retain, nonatomic) NSArray *tableRowModel;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long queryId;

+ (id)rowModelsForResult:(id)a0;
+ (id)tableModelWithCardSections:(id)a0 result:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 shouldCombine:(BOOL)a4;
+ (id)resultsForMultiResultRowInSection:(id)a0 startingAtIndex:(unsigned long long)a1;
+ (id)combinedRowModelsForRowModels:(id)a0 result:(id)a1;
+ (id)rowModelForCardSection:(id)a0 result:(id)a1;
+ (id)asyncRowManagersForCardSections:(id)a0;
+ (BOOL)shouldDisplayChevronForRowModel:(id)a0 previousRowModel:(id)a1 nextRowModel:(id)a2 nextCardsEnabled:(BOOL)a3;
+ (BOOL)resultHasHorizontallyGroupedCardSections:(id)a0;
+ (id)tableModelWithSections:(id)a0 expandedSections:(id)a1;
+ (id)tableModelWithCardSections:(id)a0 isInline:(BOOL)a1 queryId:(unsigned long long)a2;
+ (id)tableModelWithResult:(id)a0;
+ (id)gridLayoutsForCardSections:(id)a0;
+ (id)rowModelsForCardSections:(id)a0 result:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
+ (id)tableModelWithResults:(id)a0;

- (void)enumerateRowModels:(id /* block */)a0;
- (unsigned long long)numberOfSections;
- (BOOL)shouldDisplayChevronForIndexPath:(id)a0 nextCardsEnabled:(BOOL)a1;
- (id)removeRowModel:(id)a0;
- (id)rowModelForIndexPath:(id)a0;
- (void)replaceResult:(id)a0 withResult:(id)a1 completion:(id /* block */)a2;
- (id)indexPathForResultInFirstTwoSections:(id)a0;
- (id)description;
- (long long)numberOfRowsForSection:(long long)a0;
- (BOOL)indexPathExists:(id)a0;
- (id)sectionForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;
- (BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)a0;
- (id)indexPathForRowModel:(id)a0;
- (BOOL)rowWillFillBackgroundWithContentAtIndexPath:(id)a0;
- (unsigned long long)indexOfSection:(id)a0;
- (int)separatorStyleForIndexPath:(id)a0;
- (id)initWithQueryId:(unsigned long long)a0;
- (id)resultForIndexPath:(id)a0;
- (id)cardSectionForIndexPath:(id)a0;
- (id)updatedTableModelWithExpandedSections:(id)a0 hiddenSections:(id)a1 atSectionIndex:(unsigned long long)a2;

@end
