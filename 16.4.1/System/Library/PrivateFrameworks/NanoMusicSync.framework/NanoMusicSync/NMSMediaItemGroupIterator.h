@class NMSQuotaEvaluationState, NSArray, NSMutableOrderedSet, NMSQuotaEvaluationState_Legacy, NSMutableArray;

@interface NMSMediaItemGroupIterator : NSObject

@property (readonly, nonatomic) NMSQuotaEvaluationState *evaluationState;
@property (readonly, nonatomic) NMSQuotaEvaluationState_Legacy *evaluationState;
@property (nonatomic) unsigned long long sizeForItemListWithinQuota;
@property (readonly, nonatomic) unsigned long long sizeForCurrentIdentifier;
@property (nonatomic) unsigned long long nominatedItemSize;
@property (readonly, nonatomic) unsigned long long iteratingOrder;
@property (retain, nonatomic) NSArray *itemGroups;
@property (retain, nonatomic) NSMutableArray *remainingContainers;
@property (retain, nonatomic) NSMutableArray *remainingItemLists;
@property (nonatomic) unsigned long long currentContainerIndex;
@property (nonatomic) unsigned long long currentItemIndex;
@property (retain, nonatomic) NSMutableOrderedSet *mutableItemListWithinQuota;
@property (retain, nonatomic) NSMutableArray *indexesToBeRemoved;
@property (readonly, nonatomic) unsigned long long estimatedItemSize;

- (id)currentItem;
- (void).cxx_destruct;
- (id)identifiersForContainersOfType:(unsigned long long)a0;
- (void)_continueToNextContainer;
- (void)_continueToNextIdentifier;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_markToBeRemoved;
- (void)addCurrentIdentifierToWithinQuotaListAndCountSizeTowardsQuota:(BOOL)a0;
- (id)downloadInfoWithinQuota;
- (id)initWithItemGroups:(id)a0 estimatedItemSize:(unsigned long long)a1;
- (BOOL)isCurrentIdentifierEstimate;
- (void)markAllRemainingContainersAsSkipped;
- (id)mediaContainersAboveQuota;
- (void)removeCurrentIdentifier;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)skipCurrentIdentifier;

@end
