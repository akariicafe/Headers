@class IKTemplateStyleSheet, IKStyleFactory;

@interface IKViewElementStyleFactory : NSObject

@property (readonly, retain, nonatomic) IKStyleFactory *styleFactory;
@property (readonly, nonatomic) IKTemplateStyleSheet *styleSheet;

+ (id)styleFactoryWithMarkup:(id)a0 styleSheet:(id)a1;

- (void).cxx_destruct;
- (void)setViewElementStylesDirty;
- (id)initWithMarkup:(id)a0 styleSheet:(id)a1;
- (id)styleComposerForElement:(id)a0 elementStyleOverrides:(id)a1;

@end
