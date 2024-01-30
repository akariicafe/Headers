@class NSArray, NSString, PSIGroup, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PSIGroupAggregate : NSObject {
    NSMutableArray *_groupAggregateItems;
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_aggregateItemPool;
    unsigned long long _filenameGroupCount;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
}

@property (readonly, nonatomic) NSArray *searchTokens;
@property (copy, nonatomic) NSString *transientToken;
@property (readonly, nonatomic) PSIGroup *filenameGroupInAggregate;

- (void)pop;
- (void).cxx_destruct;
- (struct __CFArray { } *)_newSortedGroupIds;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfString:(id)a0 inGroup:(id)a1 useNormalizedString:(BOOL)a2 extendingSearchRange:(BOOL)a3 matchingFullToken:(BOOL)a4 excludingRanges:(id)a5;
- (BOOL)_verifySortedGroupIdsUnique;
- (id)aggregateItemWithSearchToken:(id)a0 rangeMatchingToken:(id)a1 group:(id)a2;
- (id)initWithSearchTokens:(id)a0 groupResultsQueue:(id)a1;
- (id)newGroupResult;
- (id)newGroupResultWithDateFilter:(id)a0 datedTokens:(id)a1;
- (BOOL)pushGroup:(id)a0;

@end
