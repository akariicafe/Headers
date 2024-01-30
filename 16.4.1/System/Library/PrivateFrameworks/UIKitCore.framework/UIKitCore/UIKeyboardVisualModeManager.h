@protocol UIKeyboardVisualModeManagerDelegate;

@interface UIKeyboardVisualModeManager : NSObject

@property (nonatomic) int lastVisualMode;
@property (weak, nonatomic) id<UIKeyboardVisualModeManagerDelegate> delegate;

+ (id)visualModeLog;
+ (BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+ (BOOL)softwareKeyboardAllowedOnExternalScreen;
+ (BOOL)windowingSoftwareKeyboardAllowed;

- (BOOL)windowingModeEnabled;
- (void)keyboardCameraNotification:(id)a0;
- (BOOL)expectedInputModeIsSpecialized;
- (void)enhancedWindowingModeDidChange:(id)a0;
- (BOOL)useVisualModeWindowed;
- (id)init;
- (int)visualMode;
- (BOOL)textEntryFocusOnExternalDisplay;
- (void).cxx_destruct;

@end
