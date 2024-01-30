@class SBHIDButtonStateArbiter, SBSiriHardwareButtonInteraction;

@interface SBVoiceCommandButton : NSObject <SBHIDButtonStateDelegate>

@property (retain, nonatomic) SBHIDButtonStateArbiter *buttonArbiter;
@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriHardwareButtonInteraction;
@property (nonatomic) BOOL isLongPressRecognized;

- (id)init;
- (void).cxx_destruct;
- (void)performActionsForButtonLongPress:(id)a0;
- (void)performActionsForButtonUp:(id)a0;
- (void)handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (void)performActionsForButtonDown:(id)a0;

@end
