@class NSFormatter;

@interface HFFormatterTransformer : NSFormatter

@property (copy, nonatomic) NSFormatter *sourceFormatter;
@property (copy, nonatomic) id /* block */ transformBlock;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceFormatter:(id)a0 transformBlock:(id /* block */)a1;

@end
