@interface RUIModalPresentationController : _UIFormSheetPresentationController

@property (nonatomic, setter=setRUIModalPresentationStyle:) unsigned long long ruiModalPresentationStyle;

- (unsigned long long)modalPresentationStyle;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2;

@end
