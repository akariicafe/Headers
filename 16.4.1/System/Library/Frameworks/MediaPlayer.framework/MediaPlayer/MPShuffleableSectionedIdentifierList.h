@class NSString, _MPSSILImplementation;
@protocol MPShuffleableSectionedIdentifierListDelegate;

@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList <_MPSSILDelegate> {
    _MPSSILImplementation *_shuffledList;
}

@property (copy, nonatomic) NSString *shuffleStartingSectionIdentifier;
@property (copy, nonatomic) NSString *shuffleStartingItemIdentifier;
@property (weak, nonatomic) id<MPShuffleableSectionedIdentifierListDelegate> delegate;
@property (nonatomic) long long shuffleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_candidateItemsWithExclusiveAccessToken:(id)a0;
- (void)_dequeueCandidatesWithQuota:(long long)a0 withExclusiveAccessToken:(id)a1;
- (long long)_itemCountWithExclusiveAccessToken:(id)a0;
- (id)_shuffledListWithExclusiveAccessToken:(id)a0;
- (void)addDataSource:(id)a0 section:(id)a1 afterHeadOfSection:(id)a2;
- (void)addDataSource:(id)a0 section:(id)a1 afterItem:(id)a2 inSection:(id)a3 completion:(id /* block */)a4;
- (void)addDataSource:(id)a0 section:(id)a1 afterTailOfSection:(id)a2 completion:(id /* block */)a3;
- (void)addDataSource:(id)a0 section:(id)a1 beforeTailOfSection:(id)a2 completion:(id /* block */)a3;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 afterItem:(id)a3 inSection:(id)a4 completion:(id /* block */)a5;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 afterTailOfSection:(id)a3 completion:(id /* block */)a4;
- (void)addDataSource:(id)a0 section:(id)a1 sequentially:(BOOL)a2 beforeTailOfSection:(id)a3 completion:(id /* block */)a4;
- (void)addDataSourceAtEnd:(id)a0 section:(id)a1 completion:(id /* block */)a2;
- (void)addDataSourceAtEnd:(id)a0 section:(id)a1 sequentially:(BOOL)a2 completion:(id /* block */)a3;
- (void)addDataSourceAtStart:(id)a0 section:(id)a1 completion:(id /* block */)a2;
- (void)addDataSourceAtStart:(id)a0 section:(id)a1 sequentially:(BOOL)a2 completion:(id /* block */)a3;
- (void)dataSourceInsertItems:(id)a0 afterItem:(id)a1 inSection:(id)a2;
- (void)dataSourceInsertItemsAtHead:(id)a0 inSection:(id)a1;
- (void)dataSourceInsertItemsAtTail:(id)a0 inSection:(id)a1;
- (void)dataSourceReloadItems:(id)a0 inSection:(id)a1;
- (void)dataSourceRemoveItem:(id)a0 fromSection:(id)a1;
- (void)didDequeueShuffledItemsInSSIL:(id)a0;
- (void)encodeWithCoder:(id)a0 withExclusiveAccessToken:(id)a1;
- (id)enumeratorWithOptions:(unsigned long long)a0 startPosition:(id)a1 endPosition:(id)a2 withExclusiveAccessToken:(id)a3;
- (BOOL)hasSection:(id)a0;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterHeadOfSection:(id)a2;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterItem:(id)a2 inSection:(id)a3;
- (void)moveItem:(id)a0 fromSection:(id)a1 afterTailOfSection:(id)a2;
- (void)moveItemToEnd:(id)a0 fromSection:(id)a1;
- (void)moveItemToStart:(id)a0 fromSection:(id)a1;
- (void)removeItem:(id)a0 fromSection:(id)a1;
- (void)replaceDataSource:(id)a0 forSection:(id)a1 completion:(id /* block */)a2;
- (void)safelyReshuffleAfterItem:(id)a0 inSection:(id)a1;
- (void)setShuffleType:(long long)a0 startingItem:(id)a1 inSection:(id)a2;
- (void)setShuffleType:(long long)a0 startingItem:(id)a1 inSection:(id)a2 randomSource:(id)a3;

@end
