@class _UIDiffableDataSourceDiffer, NSMapTable, NSDiffableDataSourceSnapshot;

@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject {
    NSDiffableDataSourceSnapshot *_initialSnapshot;
    NSDiffableDataSourceSnapshot *_finalSnapshot;
    _UIDiffableDataSourceDiffer *_dataSourceDiffer;
    NSMapTable *_initialSectionSnapshots;
}

@property (readonly, nonatomic) NSMapTable *rebasedSectionSnapshots;

- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 initialSectionSnapshots:(id)a2 dataSourceDiffer:(id)a3 shouldPerformChildSnapshotMoves:(BOOL)a4;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 initialSectionSnapshots:(id)a2 dataSourceDiffer:(id)a3;
- (void)_rebaseForInitialSnapshot:(id)a0 finalSnapshot:(id)a1 initialSectionSnapshots:(id)a2 dataSourceDiffer:(id)a3 shouldPerformChildSnapshotMoves:(BOOL)a4;
- (id)_transactionIncludingSectionDifferences:(BOOL)a0 source:(long long)a1;
- (id)_computeSectionTransactionsIncludingSectionDifferences:(BOOL)a0;
- (void).cxx_destruct;
- (id)computeApplyTransactionIncludingSectionDifferences:(BOOL)a0;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 initialSectionSnapshots:(id)a2;
- (id)computeReorderingTransaction;

@end
