@class NSObject;
@protocol OS_os_log;

@interface PGCurator : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (unsigned long long)maximumNumberOfItemsToElectWithTotalNumberOfItems:(unsigned long long)a0 spanningNumberOfDays:(double)a1 options:(id)a2;
+ (unsigned long long)numberOfExtraItemsNeededWithNumberOfChosenItems:(unsigned long long)a0 totalNumberOfItems:(unsigned long long)a1 options:(id)a2;
+ (unsigned long long)numberOfItemsToShaveOffWithNumberOfItems:(unsigned long long)a0 maximumNumberOfItems:(unsigned long long)a1 options:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)shaveItems:(id)a0 downToNumberOfItems:(unsigned long long)a1 options:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (void)_checkRequiredItemsWithIdentifiers:(id)a0 inItems:(id)a1;
- (id)bestItemIdentifiersWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2;
- (id)bestItemsForFeeder:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (void)completeItems:(id)a0 withFavoriteItemsFromItems:(id)a1 upToNumberOfItems:(unsigned long long)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (void)completeItems:(id)a0 withItems:(id)a1 forPersonLocalIdentifiers:(id)a2 options:(id)a3 nonRemovableItems:(id)a4 debugInfo:(id)a5 progressBlock:(id /* block */)a6;
- (id)completedItems:(id)a0 withNumberOfItems:(unsigned long long)a1 fromAllItems:(id)a2 avoidingItems:(id)a3 options:(id)a4 debugInfo:(id)a5 progressBlock:(id /* block */)a6;
- (id)deduplicatedItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)defaultItemSortDescriptors;
- (double)evaluatedDurationWithItems:(id)a0 options:(id)a1;
- (id)focusedItemsInItems:(id)a0 withOptions:(id)a1;
- (void)lastPassToCompleteItems:(id)a0 fromFeeder:(id)a1 options:(id)a2 maximumNumberOfItems:(unsigned long long)a3 debugInfo:(id)a4;
- (double)maximumDurationWithItems:(id)a0 options:(id)a1;
- (id)newMovieDeduperWithOptions:(id)a0;
- (id)newSemanticalDeduperWithOptions:(id)a0;
- (id)summarizedItemsFromCluster:(id)a0 withBeautifier:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (unsigned long long)targetDurationBasedNumberOfItemsToElectFromItems:(id)a0 options:(id)a1;

@end
