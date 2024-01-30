@class UIImageView, UILabel, MPAVController;

@interface MPVideoPlaybackBackgroundView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) MPAVController *player;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_imageNamed:(id)a0;
- (void)_activeAudioRouteDidChange:(id)a0;
- (void)_videoViewDidMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)_updateDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_isExternalPlaybackActiveDidChange:(id)a0;

@end
