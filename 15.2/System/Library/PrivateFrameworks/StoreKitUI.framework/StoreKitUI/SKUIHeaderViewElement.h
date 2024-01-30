@class SKUIButtonViewElement, NSArray;

@interface SKUIHeaderViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) NSArray *titleLabels;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
