@class NSMutableArray;

@interface SearchUICollectionModel : NSObject

@property (retain) NSMutableArray *sectionModels;
@property unsigned long long queryId;
@property BOOL isEntitySearch;

+ (id)collectionModelWithTableModel:(id)a0 expandedSections:(id)a1;
+ (id)collectionModelWithTableModel:(id)a0 expandedSections:(id)a1 expandedCollectionSections:(id)a2;

- (id)removeRowModel:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)enumerateRowModels:(id /* block */)a0;
- (BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)a0;
- (void)deleteSection:(long long)a0;
- (BOOL)indexPathExists:(id)a0;
- (id)sectionForSection:(long long)a0;
- (long long)numberOfSections;
- (BOOL)shouldDisplayChevronForIndexPath:(id)a0 nextCardsEnabled:(BOOL)a1;
- (id)sectionsWithItemsToBeHeightMatched;
- (long long)backgroundStyleForSectionIndex:(long long)a0 attributes:(id)a1;
- (long long)indexOfCollectionCardSection:(id)a0;
- (int)separatorStyleForIndexPath:(id)a0 shouldDrawTopAndBottomSeparators:(BOOL)a1;
- (BOOL)sectionNeedsHorizontalNavigation:(long long)a0;
- (int)separatorStyleForIndexPath:(id)a0;
- (id)sectionModelForIndex:(long long)a0;
- (id)indexPathForRowModel:(id)a0;
- (id)layoutSectionForSectionIndex:(long long)a0 layoutEnvironment:(id)a1 attributes:(id)a2;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)rowModelForIndexPath:(id)a0;
- (long long)indexOfSection:(id)a0;

@end
