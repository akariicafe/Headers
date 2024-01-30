@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
}

- (void)layoutSubviews;
- (long long)style;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)_playButtonTapped:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;

@end
