@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot

@property (readonly, nonatomic) TSSStylesheet *aStylesheet;
@property (weak, nonatomic) UIViewController *viewController;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stylesheet;

@end
