@class UIView;
@protocol CKComposeRecipientViewDelegate;

@interface CKComposeRecipientView : CNComposeRecipientTextView

@property (retain, nonatomic) UIView *backgroundPlatterView;
@property (weak, nonatomic) id<CKComposeRecipientViewDelegate> layoutDelegate;
@property (nonatomic) BOOL showsBackgroundPlatterView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (void)reset;
- (void)_updateBackgroundPlatterViewIfNecessary;
- (void)atomTextViewDidBecomeFirstResponder:(id)a0;

@end
