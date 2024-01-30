@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl

@property (readonly, nonatomic) CAMModeDialItem *_modeTextView;
@property (readonly, nonatomic) UIImageView *_symbolView;
@property (nonatomic) long long selectedMode;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_symbolSize;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (void)_updateModeIndicatorAnimated:(BOOL)a0;

@end
