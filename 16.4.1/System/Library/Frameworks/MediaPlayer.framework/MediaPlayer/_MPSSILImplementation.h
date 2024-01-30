@class MPRandomDistribution, NSMutableArray;
@protocol _MPSSILDelegate;

@interface _MPSSILImplementation : MPSectionedIdentifierList

@property (weak, nonatomic) id<_MPSSILDelegate> delegate;
@property (readonly, nonatomic) MPRandomDistribution *randomDistribution;
@property (retain, nonatomic) NSMutableArray *candidateItems;

+ (BOOL)supportsSecureCoding;

- (long long)itemCount;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_addShuffleSection:(id)a0 dataSource:(id)a1 withExclusiveAccessToken:(id)a2;
- (void)_appendShuffledItems:(id)a0 withExclusiveAccessToken:(id)a1;
- (void)_beforeInitWithCoder:(id)a0;
- (id)_createShuffleCloneForItem:(id)a0 inSection:(id)a1 withExclusiveAccessToken:(id)a2;
- (void)_dequeueCandidatesWithQuota:(long long)a0 withExclusiveAccessToken:(id)a1;
- (void)_enumerator:(id)a0 didEncounterEntry:(id)a1 withExclusiveAccessToken:(id)a2;
- (BOOL)_isSequentialSection:(id)a0 withExclusiveAccessToken:(id)a1;
- (void)_reverseEnumeratorWillStartAtEnd:(id)a0 withExclusiveAccessToken:(id)a1;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 afterItem:(id)a3 inSection:(id)a4;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 afterTailOfSection:(id)a3;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 beforeTailOfSection:(id)a3;
- (void)addDataSourceAtEnd:(id)a0 section:(id)a1 sequentially:(BOOL)a2;
- (void)addDataSourceAtStart:(id)a0 section:(id)a1 sequentially:(BOOL)a2;
- (void)dataSourceInsertItems:(id)a0 afterItem:(id)a1 inSection:(id)a2;
- (void)dataSourceInsertItemsAtHead:(id)a0 inSection:(id)a1;
- (void)dataSourceInsertItemsAtTail:(id)a0 inSection:(id)a1;
- (void)dataSourceReloadItems:(id)a0 inSection:(id)a1;
- (void)dataSourceRemoveItem:(id)a0 fromSection:(id)a1;
- (void)dequeueCandidatesWithQuota:(long long)a0;
- (void)encodeWithCoder:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)initWithSectionedIdentifierList:(id)a0 randomSource:(id)a1 startingItemEntry:(id)a2 withExclusiveAccessToken:(id)a3;
- (void)safelyReshuffleAfterItem:(id)a0 inSection:(id)a1;

@end
