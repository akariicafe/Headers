@class SKUIButtonViewElement, SKUIViewElementText;

@interface SKUIDividerViewElement : SKUIViewElement {
    SKUIButtonViewElement *_button;
    long long _dividerType;
    BOOL _dividerTypeWasInitialized;
}

@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) long long dividerType;
@property (readonly, nonatomic) SKUIViewElementText *text;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
