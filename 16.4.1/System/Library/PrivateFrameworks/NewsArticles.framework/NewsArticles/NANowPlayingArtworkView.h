@class UIImageView;

@interface NANowPlayingArtworkView : UIView

@property (retain, nonatomic) UIImageView *trackImageView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } artworkSize;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })artworkSizeForTitleViewWidth:(double)a0;
- (void)setTrackImage:(id)a0 animated:(BOOL)a1;

@end
