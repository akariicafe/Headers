@class UIKBBackdropView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBackdropView : UIView

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)backdropViewStyle;

@end
