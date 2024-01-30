@class NSMutableArray, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol UIScenePresenter;

@interface SBMedusaHostedKeyboardWindow : SBWindow {
    id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}

@property (retain, nonatomic) NSMutableArray *windowLevelAssertions;

+ (BOOL)_isSecure;
+ (BOOL)autorotates;

- (void).cxx_destruct;
- (void)dealloc;
- (void)removeWindowLevelAssertion:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)addWindowLevelAssertion:(id)a0;
- (BOOL)isActive;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)description;
- (id)newWindowLevelAssertionWithPriority:(unsigned long long)a0 windowLevel:(double)a1;
- (void)_updateWindowLevel;
- (id)initWithKeyboardScene:(id)a0;

@end
