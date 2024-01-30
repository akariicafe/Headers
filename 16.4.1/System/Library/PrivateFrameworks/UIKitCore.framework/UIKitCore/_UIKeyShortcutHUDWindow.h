@class NSArray;
@protocol _UIKeyShortcutHUDWindowDelegate;

@interface _UIKeyShortcutHUDWindow : UIWindow

@property (weak, nonatomic) id<_UIKeyShortcutHUDWindowDelegate> delegate;
@property (retain, nonatomic) NSArray *hudKeyCommands;

+ (BOOL)_isSystemWindow;

- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (id)initWithWindowScene:(id)a0;
- (id)keyCommands;
- (id)_roleHint;
- (void).cxx_destruct;
- (void)resignKeyWindow;
- (void)_hudWindowSceneDidResignTargetOfKeyboardEventDeferringEnvironment:(id)a0;
- (BOOL)_wantsFocusEngine;

@end
