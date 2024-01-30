@class NSFormatter;

@interface HFFormatterTransformer : NSFormatter

@property (copy, nonatomic) NSFormatter *sourceFormatter;
@property (copy, nonatomic) id /* block */ transformBlock;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringForObjectValue:(id)a0;
- (id)initWithSourceFormatter:(id)a0 transformBlock:(id /* block */)a1;

@end
