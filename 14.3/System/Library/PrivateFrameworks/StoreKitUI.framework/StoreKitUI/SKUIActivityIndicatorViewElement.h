@class SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIActivityIndicatorViewElement : SKUIViewElement {
    double _period;
}

@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) SKUILabelViewElement *text;

- (BOOL)isDisabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
