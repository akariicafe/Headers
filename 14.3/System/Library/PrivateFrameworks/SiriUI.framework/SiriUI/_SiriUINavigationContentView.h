@class UIView;

@interface _SiriUINavigationContentView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
