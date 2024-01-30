@class NSArray;
@protocol _UIKeyShortcutHUDWindowDelegate;

@interface _UIKeyShortcutHUDWindow : UIWindow

@property (weak, nonatomic) id<_UIKeyShortcutHUDWindowDelegate> delegate;
@property (retain, nonatomic) NSArray *hudKeyCommands;

+ (BOOL)_isSystemWindow;

- (void)_hudWindowSceneDidResignTargetOfKeyboardEventDeferringEnvironment:(id)a0;
- (id)keyCommands;
- (void)resignKeyWindow;
- (id)_roleHint;
- (BOOL)_wantsFocusEngine;
- (void).cxx_destruct;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (id)initWithWindowScene:(id)a0;

@end
