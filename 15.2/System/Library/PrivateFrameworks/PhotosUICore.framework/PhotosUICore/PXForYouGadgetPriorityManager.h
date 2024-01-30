@class NSMutableDictionary, NSDate;
@protocol PXGadgetRankStorage;

@interface PXForYouGadgetPriorityManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *currentEntries;
@property (readonly, nonatomic) id<PXGadgetRankStorage> rankStorage;
@property (nonatomic) BOOL needsSorting;
@property (nonatomic) long long nestedRegistration;
@property (retain, nonatomic) NSDate *baseNewDate;
@property (nonatomic) long long sortingAlgorithm;

- (id)initWithStorage:(id)a0;
- (long long)rankForGadgetType:(unsigned long long)a0;
- (void)startRegistration;
- (id)_sortingKeyForOldEntries;
- (void)registerRankable:(id)a0;
- (void)endRegistration;
- (void).cxx_destruct;
- (void)_splitCurrentEntriesIntoNew:(id)a0 andOld:(id)a1;
- (void)_persistSortedEntries:(id)a0;
- (void)_sortCurrentEntriesIfNeeded;
- (BOOL)invalidateRanks;
- (void)_sortCurrentEntries;
- (void)resetToDefaultPriorities;

@end
