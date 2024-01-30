@class UIResponder, UIWindowScene;

@interface UIInputResponderController : NSObject

@property (readonly, nonatomic) UIWindowScene *scene;
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL automaticAppearanceEnabled;
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates;

+ (id)activeInputResponderController;
+ (void)setInterfaceOrientation:(long long)a0;
+ (void)performOnControllers:(id /* block */)a0;
+ (long long)interfaceOrientation;

- (double)verticalOverlapForView:(id)a0 usingKeyboardInfo:(id)a1;
- (id)_textInputSessionAnalytics;
- (void)assertNo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleInputViewFrameInView:(id)a0;
- (void)refreshWithLocalMinimumKeyboardHeight:(double)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrameInView:(id)a0;
- (void)addVisibilityObserver:(id)a0;
- (void)removeVisibilityObserver:(id)a0;
- (void)_beginDisablingAnimations;
- (void)_endDisablingAnimations;

@end
