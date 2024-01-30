@class UIImageView;

@interface NUNowPlayingArtworkView : UIView

@property (retain, nonatomic) UIImageView *trackImageView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } artworkSize;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTrackImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })artworkSizeForTitleViewWidth:(double)a0;

@end
