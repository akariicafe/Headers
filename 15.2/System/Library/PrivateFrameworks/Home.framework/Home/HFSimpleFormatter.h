@interface HFSimpleFormatter : NSFormatter <NSCopying>

@property (readonly, copy, nonatomic) id /* block */ formatterBlock;
@property (readonly, copy, nonatomic) id /* block */ attributedFormatterBlock;

- (id)stringForObjectValue:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormatterBlock:(id /* block */)a0;
- (id)initWithAttributedFormatterBlock:(id /* block */)a0;

@end
