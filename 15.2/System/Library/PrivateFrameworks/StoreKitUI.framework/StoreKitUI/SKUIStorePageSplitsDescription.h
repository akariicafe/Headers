@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>

@property (copy, nonatomic) SKUIStorePageSplit *bottomSplit;
@property (copy, nonatomic) SKUIStorePageSplit *leftSplit;
@property (copy, nonatomic) SKUIStorePageSplit *rightSplit;
@property (copy, nonatomic) SKUIStorePageSplit *topSplit;
@property (readonly, nonatomic) SKUIStorePageSplit *firstSplit;
@property (readonly, nonatomic) long long numberOfSplits;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSplitsUsingBlock:(id /* block */)a0;
- (void)sizeSplitsToFitWidth:(double)a0 usingBlock:(id /* block */)a1;

@end
