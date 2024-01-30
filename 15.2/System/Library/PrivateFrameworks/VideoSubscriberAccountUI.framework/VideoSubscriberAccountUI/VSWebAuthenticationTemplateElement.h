@class VSMessagePortFeature;

@interface VSWebAuthenticationTemplateElement : IKViewElement

@property (readonly, nonatomic) VSMessagePortFeature *messagePort;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
