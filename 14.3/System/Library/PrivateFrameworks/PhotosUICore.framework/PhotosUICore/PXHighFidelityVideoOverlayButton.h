@class UIButton, _UIBackdropView, UIImageView;

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause;
@property (nonatomic) BOOL showAsPause;

- (void)_playButtonActivate:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 allowBackdropStatisticsSupression:(BOOL)a1;
- (void)_playButtonDeactivate:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (long long)style;
- (void)_playButtonTapped:(id)a0;
- (void)layoutSubviews;

@end
