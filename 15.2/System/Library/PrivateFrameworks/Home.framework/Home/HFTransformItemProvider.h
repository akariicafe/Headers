@class NSMutableDictionary, HFItemProvider;

@interface HFTransformItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemProvider *sourceProvider;
@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithSourceProvider:(id)a0 transformationBlock:(id /* block */)a1;

@end
