@class VSIKItemGroup;

@interface VSIKItemGroupElement : IKViewElement

@property (readonly, nonatomic) VSIKItemGroup *itemGroup;

+ (id)supportedFeaturesForElementName:(id)a0;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
