@class UIImageView, UILabel;
@protocol NUNowPlayingTitleViewLayoutSpecProvider;

@interface NUNowPlayingTitleView : UIView

@property (retain, nonatomic) UIImageView *publisherImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<NUNowPlayingTitleViewLayoutSpecProvider> layoutSpecProvider;
@property (readonly, nonatomic) double publisherLogoHeight;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)setMarqueeRunning:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPublisherImage:(id)a0 fallbackName:(id)a1;
- (void)_setPublisherImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutSpecProvider:(id)a1;

@end
