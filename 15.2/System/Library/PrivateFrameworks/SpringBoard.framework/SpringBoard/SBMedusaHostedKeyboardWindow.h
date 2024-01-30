@class NSMutableArray, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol UIScenePresenter;

@interface SBMedusaHostedKeyboardWindow : SBWindow {
    id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}

@property (retain, nonatomic) NSMutableArray *windowLevelAssertions;

+ (BOOL)_isSecure;
+ (BOOL)autorotates;

- (id)newWindowLevelAssertionWithPriority:(unsigned long long)a0 windowLevel:(double)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)succinctDescription;
- (BOOL)isActive;
- (id)description;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithKeyboardScene:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)removeWindowLevelAssertion:(id)a0;
- (void)addWindowLevelAssertion:(id)a0;
- (BOOL)_shouldControlAutorotation;
- (void)dealloc;
- (void)_updateWindowLevel;

@end
