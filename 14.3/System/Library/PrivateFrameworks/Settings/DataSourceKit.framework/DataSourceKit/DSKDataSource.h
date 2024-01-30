@class NSMutableArray;
@protocol DSKDataSourceUpdates;

@interface DSKDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *_sections;
@property (weak, nonatomic) id<DSKDataSourceUpdates> updateDelegate;
@property (readonly, nonatomic) long long numberOfSections;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendItems:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)insertItems:(id)a0 beforeItem:(id)a1;
- (void)deleteSectionAtIndex:(long long)a0;
- (void)reloadItems:(id)a0;
- (id)_dataSourceSectionAtSectionIndex:(long long)a0;
- (void)_insertSectionWithIdentifiableObject:(id)a0 atSectionIndex:(long long)a1;
- (long long)_sectionIndexForSectionWithIdentifiableObject:(id)a0;
- (void)insertSectionWithIdentifiableObject:(id)a0 beforeSectionWithIndex:(long long)a1;
- (id)itemForSection:(long long)a0;
- (void)insertSectionWithIdentifiableObject:(id)a0 afterSectionWithIndex:(long long)a1;
- (void)reloadSectionAtIndex:(long long)a0;
- (void)appendItems:(id)a0 intoSectionWithIndex:(long long)a1;
- (long long)_sectionIndexForSectionContainingIdentifiableObject:(id)a0;
- (void)deleteItems:(id)a0 fromSectionWithIndex:(long long)a1;
- (void)appendSectionWithIdentifiableObject:(id)a0;
- (void)insertSectionWithIdentifiableObject:(id)a0 beforeSectionWithIdentifiableObject:(id)a1;
- (void)insertSectionWithIdentifiableObject:(id)a0 afterSectionWithIdentifiableObject:(id)a1;
- (void)deleteSectionWithIdentifiableObject:(id)a0;
- (void)reloadSectionWithIdentifiableObject:(id)a0;
- (void)appendItems:(id)a0 intoSectionWithIdentifiableObject:(id)a1;
- (void)deleteItems:(id)a0 fromSectionWithIdentifiableObject:(id)a1;

@end
