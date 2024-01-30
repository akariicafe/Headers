@class SKUIPhysicalCirclesTemplateDOMFeature, NSArray, SKUIPaletteViewElement, SKUILabelViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property (readonly, nonatomic) SKUILabelViewElement *titleElement;
@property (readonly, nonatomic) NSArray *circleItemElements;
@property (readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
@property (readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)dispatchRemovedEventWithChildViewElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
