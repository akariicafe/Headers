@class RUIStyle;

@interface RUIModalPresentationController : _UIFormSheetPresentationController {
    RUIStyle *_style;
}

@property (nonatomic, setter=setRUIModalPresentationStyle:) unsigned long long ruiModalPresentationStyle;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2;
- (unsigned long long)modalPresentationStyle;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2 style:(id)a3;
- (double)_sheetHeightWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;

@end
