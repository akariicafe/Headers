@class _UIBackdropView, UIImageView;

@interface PMHighFidelityVideoOverlayButton : UIView <PMVideoOverlayButton> {
    long long _style;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 allowBackdropStatisticsSupression:(BOOL)a1;
- (long long)style;
- (void)layoutSubviews;

@end
