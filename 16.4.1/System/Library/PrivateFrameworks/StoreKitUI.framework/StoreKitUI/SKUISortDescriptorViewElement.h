@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isAscending) BOOL ascending;
@property (readonly, copy, nonatomic) NSString *property;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
