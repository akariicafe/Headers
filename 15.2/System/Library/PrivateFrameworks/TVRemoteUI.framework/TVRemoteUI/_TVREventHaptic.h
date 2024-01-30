@class UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

@interface _TVREventHaptic : NSObject {
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

- (void).cxx_destruct;
- (void)playSelectionEventHaptic;
- (void)playImpactEventHaptic;

@end
