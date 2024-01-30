@class NSArray, NSDictionary;

@interface SCWatchlistDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedStocks;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedStocks;
@property (readonly, copy, nonatomic) NSArray *removedStocks;
@property (readonly, copy, nonatomic) NSArray *reorderedStocks;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedStocks;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *stocksPreDiff;
@property (readonly, copy, nonatomic) NSArray *stocksPostDiff;

+ (id)reorderedStocksFrom:(id)a0 to:(id)a1;

- (void).cxx_destruct;
- (id)initWithOldStocks:(id)a0 newStocks:(id)a1;

@end
