@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow

@property (nonatomic) BOOL touchesPassThroughToSpringBoard;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;

+ (BOOL)sb_autorotates;
+ (BOOL)_isSecure;
+ (id)defaultLayoutStrategy;

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)assistantRootViewController;
- (id)initWithScreen:(id)a0 layoutStrategy:(id)a1 debugName:(id)a2 scene:(id)a3;

@end
