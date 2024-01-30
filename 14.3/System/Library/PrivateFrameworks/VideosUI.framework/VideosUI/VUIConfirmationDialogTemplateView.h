@class UIVisualEffectView, UIView;

@interface VUIConfirmationDialogTemplateView : UIView

@property (retain, nonatomic) UIView *cardView;
@property (readonly, nonatomic) UIVisualEffectView *backdropView;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
