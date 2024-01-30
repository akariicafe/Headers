@class UIView;
@protocol AVTAdaptativeLayout;

@interface AVTAdaptativeLayoutView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<AVTAdaptativeLayout> layout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentView:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
