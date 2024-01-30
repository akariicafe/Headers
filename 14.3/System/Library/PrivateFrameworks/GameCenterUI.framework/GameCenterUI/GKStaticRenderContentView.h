@class UIView;

@interface GKStaticRenderContentView : UIView

@property (retain, nonatomic) UIView *contentView;

- (void)setNeedsLayout;
- (void)dealloc;
- (void)prepareForReuse;
- (void)prepareToReuseSubviewsOfView:(id)a0;
- (id)description;
- (void)layoutSubviews;

@end
