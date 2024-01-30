@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _UICollectionViewPrefetchingContext : NSObject

@property (retain, nonatomic) NSArray *remainingIndexPaths;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *itemsDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataAccessQueue;

+ (id)prefetchingContextWithItems:(id)a0;

- (id)popNextItem;
- (void).cxx_destruct;
- (void)prefetchCompleteForItemAtIndexPath:(id)a0;
- (id)peekNextItem;
- (BOOL)hasRemainingItems;
- (id)initWithPrefetchItems:(id)a0;
- (id)_items;
- (void)_invalidateRemainingIndexPaths;

@end
