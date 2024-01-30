@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement

@property (readonly, nonatomic) IKAppKeyboard *keyboard;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
