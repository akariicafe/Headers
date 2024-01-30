@class NSArray, NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference;

@interface NSDiffableDataSourceTransaction : NSObject

@property (readonly, nonatomic) NSArray *reorderedItemIdentifiers;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;
@property (readonly, nonatomic) NSArray *sectionTransactions;

+ (id)applyTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;
+ (id)_computeReorderingTransactionWithInitialSnapshot:(id)a0 reorderingUpdate:(id)a1 sectionSnapshotProvider:(id /* block */)a2;
+ (id)reorderingTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;

- (id)transactionWithSectionTransactions:(id)a0;
- (id)_spiCopy;
- (BOOL)isApplyTransaction;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (long long)finalSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)finalDataSourceSnapshotter;
- (BOOL)isEqual:(id)a0;
- (BOOL)_containsItemIdentifier:(id)a0;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 reorderedItemIdentifiers:(id)a3 difference:(id)a4 sectionTransactions:(id)a5;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 finalSectionSnapshots:(id)a4;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (BOOL)isReorderingTransaction;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (id)performDiffGeneratingUpdates;
- (long long)initialSectionCount;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 reorderedItemIdentifiers:(id)a4 sectionTransactions:(id)a5;
- (id)initialDataSourceSnapshotter;

@end
