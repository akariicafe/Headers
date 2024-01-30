@class UIResponder, UIWindowScene;

@interface UIInputResponderController : NSObject

@property (readonly, nonatomic) UIWindowScene *scene;
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL automaticAppearanceEnabled;
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates;

+ (void)performOnControllers:(id /* block */)a0;
+ (void)setInterfaceOrientation:(long long)a0;
+ (long long)interfaceOrientation;
+ (id)activeInputResponderController;

- (void)_beginDisablingAnimations;
- (void)_endDisablingAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrameInView:(id)a0;
- (void)removeVisibilityObserver:(id)a0;
- (id)_textInputSessionAnalytics;
- (double)verticalOverlapForView:(id)a0 usingKeyboardInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleInputViewFrameInView:(id)a0;
- (void)addVisibilityObserver:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithLocalMinimumKeyboardHeight:(double)a0;
- (void)assertNo;

@end
