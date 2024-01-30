@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying>

@property (retain, nonatomic) NSDictionary *staticResults;
@property (copy, nonatomic) id /* block */ resultsBlock;

+ (id)emptyItem;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResults:(id)a0;
- (id)initWithResultsBlock:(id /* block */)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
