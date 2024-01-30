@class UIDelayedAction, NSString, NSDate;
@protocol UIKeyboardInputModeIndicatorControllerDelegate;

@interface UIKeyboardInputModeIndicatorController : NSObject

@property (retain, nonatomic) UIDelayedAction *dismissAction;
@property (retain, nonatomic) UIDelayedAction *idleAction;
@property (retain, nonatomic) NSDate *lastPresentedTime;
@property (retain, nonatomic) NSString *focusedSceneID;
@property (weak, nonatomic) id<UIKeyboardInputModeIndicatorControllerDelegate> delegate;

+ (BOOL)enabled;

- (void)didBecomeActive;
- (void)willResignActive;
- (BOOL)enabled;
- (void)keyPressed;
- (void)keyboardWindowEnabled:(BOOL)a0;
- (void)idle;
- (void)dismissIndicator;
- (void)inputModeChanged;
- (void)focusChanged;
- (void)setNeedsIndicatorShow;
- (void)clear;
- (void)hardwareKeyboardDettached;
- (void)focusedSceneChanged:(id)a0;
- (void)presentIndicator;
- (void).cxx_destruct;
- (void)showIndicator;

@end
