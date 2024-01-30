@class NSMutableDictionary;

@interface HFMultipleTransformItemProvider : HFTransformItemProvider

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)initWithSourceProvider:(id)a0 multipleTransformationBlock:(id /* block */)a1;

@end
