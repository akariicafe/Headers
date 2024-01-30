@class NMSQuotaEvaluationState, NSArray, NSMutableOrderedSet, NSMutableArray;

@interface NMSMediaItemGroupIterator : NSObject

@property (readonly, nonatomic) NMSQuotaEvaluationState *evaluationState;
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
- (id)downloadInfoWithinQuota;
- (void)markAllRemainingContainersAsSkipped;
- (BOOL)isCurrentIdentifierEstimate;
- (void)addCurrentIdentifierToWithinQuotaList;
- (void)removeCurrentIdentifier;
- (void)skipCurrentIdentifier;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_continueToNextIdentifier;
- (void)_markToBeRemoved;
- (id)initWithItemGroups:(id)a0 estimatedItemSize:(unsigned long long)a1;
- (void)_continueToNextContainer;
- (BOOL)isCurrentItemManuallyAdded;
- (id)itemGroupForIdentifiers:(id)a0;
- (id)identifiersForContainersOfType:(unsigned long long)a0;
- (id)mediaContainersAboveQuota;

@end
