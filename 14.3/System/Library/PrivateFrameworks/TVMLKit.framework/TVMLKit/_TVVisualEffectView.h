@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView

@property (weak, nonatomic) UIView *hostView;

+ (void)removeHostView:(id)a0;
+ (void)disableForHostView:(id)a0;
+ (void)enableForHostView:(id)a0;
+ (void)addHostView:(id)a0;
+ (id)hostViewDisablements;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)_setDisabled:(BOOL)a0;
- (void)_disablement:(id)a0;

@end
