@class SBAssistantRootViewController;

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (nonatomic) BOOL touchesPassThroughToSpringBoard;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;

+ (BOOL)sb_autorotates;
+ (BOOL)_isSecure;
+ (id)defaultLayoutStrategy;

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)isOpaque;
- (id)initWithDebugName:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)assistantRootViewController;

@end
