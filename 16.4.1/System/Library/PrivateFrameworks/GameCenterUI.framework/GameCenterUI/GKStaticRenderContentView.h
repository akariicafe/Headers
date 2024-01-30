@class UIView;

@interface GKStaticRenderContentView : UIView

@property (retain, nonatomic) UIView *contentView;

- (void)setNeedsLayout;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)description;
- (void).cxx_destruct;
- (void)prepareToReuseSubviewsOfView:(id)a0;

@end
