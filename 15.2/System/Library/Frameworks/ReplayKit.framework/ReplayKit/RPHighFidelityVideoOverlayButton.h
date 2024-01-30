@class UIButton, _UIBackdropView;

@interface RPHighFidelityVideoOverlayButton : UIView <RPVideoOverlayButton> {
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (long long)style;
- (void)_playButtonActivate:(id)a0;
- (void)_playButtonDeactivate:(id)a0;
- (void)_playButtonTapped:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
