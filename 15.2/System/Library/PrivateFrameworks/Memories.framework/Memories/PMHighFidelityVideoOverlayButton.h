@class _UIBackdropView, UIImageView;

@interface PMHighFidelityVideoOverlayButton : UIView <PMVideoOverlayButton> {
    long long _style;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
}

- (void)layoutSubviews;
- (long long)style;
- (id)initWithStyle:(long long)a0 allowBackdropStatisticsSupression:(BOOL)a1;
- (void).cxx_destruct;

@end
