@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow

@property (nonatomic) BOOL touchesPassThroughToSpringBoard;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;

+ (BOOL)_isSecure;
+ (BOOL)sb_autorotates;
+ (id)defaultLayoutStrategy;

- (void)setRootViewController:(id)a0;
- (id)assistantRootViewController;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithScreen:(id)a0 role:(id)a1 debugName:(id)a2;

@end
