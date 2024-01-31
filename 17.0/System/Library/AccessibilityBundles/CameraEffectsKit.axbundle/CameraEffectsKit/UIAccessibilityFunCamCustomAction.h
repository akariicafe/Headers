@class UIViewController, UIAccessibilityElement;

@interface UIAccessibilityFunCamCustomAction : UIAccessibilityCustomAction

@property (weak, nonatomic) id effect;
@property (weak, nonatomic) UIAccessibilityElement *axElement;
@property (weak, nonatomic) UIViewController *vc;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 target:(id)a1 selector:(SEL)a2 effect:(id)a3 axElement:(id)a4 vc:(id)a5;

@end
