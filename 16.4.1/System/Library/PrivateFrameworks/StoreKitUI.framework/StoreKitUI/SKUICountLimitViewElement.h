@class NSString;

@interface SKUICountLimitViewElement : SKUILimitViewElement

@property (readonly, nonatomic) long long limitValue;
@property (readonly, copy, nonatomic) NSString *entityTypeString;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
