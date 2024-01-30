@interface HFValueSetFormatter : NSFormatter

@property (copy, nonatomic) id /* block */ stringProvider;
@property (nonatomic) long long unitStyle;

+ (id)formatterWithStringProvider:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringForObjectValue:(id)a0;
- (id)initWithStringProvider:(id /* block */)a0;

@end
