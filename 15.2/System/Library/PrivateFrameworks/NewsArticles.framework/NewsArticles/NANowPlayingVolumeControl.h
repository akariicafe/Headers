@class UIImageView, UIVisualEffectView, MPVolumeSlider;

@interface NANowPlayingVolumeControl : UIView

@property (retain, nonatomic) UIVisualEffectView *lighteningEffectView;
@property (retain, nonatomic) UIImageView *volumeMaxImageView;
@property (retain, nonatomic) UIImageView *volumeMinImageView;
@property (retain, nonatomic) MPVolumeSlider *volumeSlider;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
