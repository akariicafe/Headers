@class NSString;

@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)entityValuePredicate;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
