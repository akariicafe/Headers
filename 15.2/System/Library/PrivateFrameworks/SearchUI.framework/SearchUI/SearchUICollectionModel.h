@class NSMutableArray;

@interface SearchUICollectionModel : NSObject

@property (retain) NSMutableArray *sectionModels;

+ (id)collectionModelWithTableModel:(id)a0 expandedSections:(id)a1;

- (void)enumerateRowModels:(id /* block */)a0;
- (long long)numberOfSections;
- (BOOL)shouldDisplayChevronForIndexPath:(id)a0 nextCardsEnabled:(BOOL)a1;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)sectionModelForIndex:(long long)a0;
- (id)layoutSectionForSectionIndex:(long long)a0 layoutEnvironment:(id)a1 attributes:(id)a2;
- (id)removeRowModel:(id)a0;
- (id)rowModelForIndexPath:(id)a0;
- (id)sectionsWithItemsToBeHeightMatched;
- (BOOL)indexPathExists:(id)a0;
- (void).cxx_destruct;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;
- (BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)a0;
- (id)indexPathForRowModel:(id)a0;
- (id)sectionForSection:(long long)a0;
- (long long)indexOfSection:(id)a0;
- (int)separatorStyleForIndexPath:(id)a0;
- (long long)backgroundStyleForSectionIndex:(long long)a0 attributes:(id)a1;

@end
