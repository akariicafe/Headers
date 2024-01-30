@class UIView;

@interface GKStaticRenderContentView : UIView

@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (id)description;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)prepareToReuseSubviewsOfView:(id)a0;

@end
