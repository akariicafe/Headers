@class NSMutableDictionary, HFItemProvider;

@interface HFTransformItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemProvider *sourceProvider;
@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)invalidationReasons;
- (id)initWithSourceProvider:(id)a0 transformationBlock:(id /* block */)a1;
- (id)reloadItems;

@end
