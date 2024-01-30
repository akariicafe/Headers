@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot

@property (readonly, nonatomic) TSSStylesheet *aStylesheet;
@property (weak, nonatomic) UIViewController *viewController;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)stylesheet;

@end
