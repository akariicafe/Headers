@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {
    long long _style;
    id _target;
    SEL _action;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause;
@property (nonatomic) BOOL showAsPause;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (long long)style;
- (void)_handleTap:(id)a0;

@end
