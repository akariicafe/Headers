@protocol CAMMachineReadableCodeButtonDelegate;

@interface CAMMachineReadableCodeButton : UIButton

@property (nonatomic, getter=isDismissable) BOOL dismissable;
@property (weak, nonatomic) id<CAMMachineReadableCodeButtonDelegate> delegate;

- (void)updateConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_didTapDismiss:(id)a0;

@end
