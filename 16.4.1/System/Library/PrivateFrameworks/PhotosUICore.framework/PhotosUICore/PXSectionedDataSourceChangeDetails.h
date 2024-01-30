@class PXArrayChangeDetails, NSIndexSet, NSString, NSDictionary, NSNumber;

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails> {
    NSDictionary *_itemChangeDetailsBySection;
    NSDictionary *_itemsWithSubitemChangesBySection;
    NSDictionary *_subitemChangeDetailsByItemBySection;
    NSNumber *_hasAnyChangesCache;
    NSNumber *_hasAnyInsertionsRemovalsOrMovesCache;
}

@property (readonly, nonatomic) long long fromDataSourceIdentifier;
@property (readonly, nonatomic) long long toDataSourceIdentifier;
@property (readonly, nonatomic) PXArrayChangeDetails *sectionChanges;
@property (readonly, nonatomic) NSIndexSet *sectionsWithItemChanges;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)changeDetailsAreOnlyInsertionsOrOnlyRemovalsAtEnd:(id)a0 fromDataSource:(id)a1 toDataSource:(id)a2;
+ (id)changeDetailsWithNoChangesFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
+ (id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
+ (BOOL)changesHaveAnyInsertionsRemovalsOrMoves:(id)a0;
+ (void)debug_assertValidChangeDetails:(id)a0 fromDataSource:(id)a1 toDataSource:(id)a2;
+ (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterApplyingChanges:(id)a0 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 hasIncrementalChanges:(out BOOL *)a2 objectChanged:(out BOOL *)a3;
+ (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterApplyingChanges:(id)a0 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 hasIncrementalChanges:(out BOOL *)a2 objectChanged:(out BOOL *)a3 changedProperties:(id)a4;
+ (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterRevertingChanges:(id)a0 fromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 hasIncrementalChanges:(out BOOL *)a2 objectChanged:(out BOOL *)a3;
+ (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterRevertingChanges:(id)a0 fromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 hasIncrementalChanges:(out BOOL *)a2 objectChanged:(out BOOL *)a3 changedProperties:(id)a4;
+ (id)indexPathSetAfterApplyingChanges:(id)a0 toIndexPathSet:(id)a1 hasIncrementalChanges:(out BOOL *)a2;
+ (id)indexPathSetAfterRevertingChanges:(id)a0 fromIndexPathSet:(id)a1 hasIncrementalChanges:(out BOOL *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1 sectionChanges:(id)a2 itemChangeDetailsBySection:(id)a3 subitemChangeDetailsByItemBySection:(id)a4;
- (id)changedItemsInSection:(long long)a0;
- (id)deletedItemsInSection:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 hasIncrementalChanges:(out BOOL *)a1 objectChanged:(out BOOL *)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 hasIncrementalChanges:(out BOOL *)a1 objectChanged:(out BOOL *)a2 changedProperties:(id)a3;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 hasIncrementalChanges:(out BOOL *)a1 objectChanged:(out BOOL *)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 hasIncrementalChanges:(out BOOL *)a1 objectChanged:(out BOOL *)a2 changedProperties:(id)a3;
- (id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)a0 hasIncrementalChanges:(out BOOL *)a1;
- (id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)a0 hasIncrementalChanges:(out BOOL *)a1;
- (id)initWithSectionedDataSourceChangeDetails:(id)a0 withFromDataSourceIdentifier:(long long)a1 toDataSourceIdentifier:(long long)a2;
- (id)insertedItemsInSection:(long long)a0;
- (id)itemChangesInSection:(long long)a0;
- (id)itemsWithSubitemChangesInSection:(long long)a0;
- (id)subitemChangesInItem:(long long)a0 section:(long long)a1;

@end
