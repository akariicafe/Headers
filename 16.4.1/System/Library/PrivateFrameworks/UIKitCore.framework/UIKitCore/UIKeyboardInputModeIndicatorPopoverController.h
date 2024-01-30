@class UIKeyboardInputModeIndicator;

@interface UIKeyboardInputModeIndicatorPopoverController : UIKeyboardPopoverController {
    UIKeyboardInputModeIndicator *_inputModeIndicator;
}

- (long long)overrideUserInterfaceStyle;
- (id)init;
- (void).cxx_destruct;
- (void)updateInputModeIndicator;

@end
