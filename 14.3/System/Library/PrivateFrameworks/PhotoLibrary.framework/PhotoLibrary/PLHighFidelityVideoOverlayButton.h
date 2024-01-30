@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
}

- (id)initWithStyle:(long long)a0;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)dealloc;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (long long)style;
- (void)_playButtonTapped:(id)a0;
- (void)layoutSubviews;

@end
