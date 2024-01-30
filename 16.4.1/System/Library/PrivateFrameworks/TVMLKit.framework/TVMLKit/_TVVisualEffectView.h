@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView

@property (weak, nonatomic) UIView *hostView;

+ (void)removeHostView:(id)a0;
+ (void)addHostView:(id)a0;
+ (void)disableForHostView:(id)a0;
+ (void)enableForHostView:(id)a0;
+ (id)hostViewDisablements;

- (void)didMoveToWindow;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_disablement:(id)a0;
- (void)_setDisabled:(BOOL)a0;

@end
