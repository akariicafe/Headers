@class SBSeparatorNubView;

@interface SBSeparatorView : UIView

@property (retain, nonatomic) SBSeparatorNubView *nubView;
@property (nonatomic) unsigned long long nubStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nubRect;
@property (nonatomic) double keyboardHeight;

+ (struct CGSize { double x0; double x1; })nubHitTestSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateNubViewFrame;

@end
