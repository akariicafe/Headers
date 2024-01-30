@class NSArray, NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference;

@interface NSDiffableDataSourceTransaction : NSObject

@property (readonly, nonatomic) NSArray *reorderedItemIdentifiers;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;
@property (readonly, nonatomic) NSArray *sectionTransactions;

+ (id)_computeReorderingTransactionWithInitialSnapshot:(id)a0 reorderingUpdate:(id)a1 sectionSnapshotProvider:(id /* block */)a2;
+ (id)applyTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;
+ (id)reorderingTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;

- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (id)finalDataSourceSnapshotter;
- (long long)initialSectionCount;
- (id)performDiffGeneratingUpdates;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (BOOL)_containsItemIdentifier:(id)a0;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (BOOL)isReorderingTransaction;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (id)transactionWithSectionTransactions:(id)a0;
- (id)_spiCopy;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 finalSectionSnapshots:(id)a4;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (BOOL)isApplyTransaction;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 reorderedItemIdentifiers:(id)a3 difference:(id)a4 sectionTransactions:(id)a5;
- (id)initialDataSourceSnapshotter;
- (long long)finalSectionCount;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 reorderedItemIdentifiers:(id)a4 sectionTransactions:(id)a5;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;

@end
