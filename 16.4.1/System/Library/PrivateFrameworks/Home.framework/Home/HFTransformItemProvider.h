@class NSMutableDictionary, HFItemProvider;

@interface HFTransformItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemProvider *sourceProvider;
@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithSourceProvider:(id)a0 transformationBlock:(id /* block */)a1;
- (id)invalidationReasons;

@end
