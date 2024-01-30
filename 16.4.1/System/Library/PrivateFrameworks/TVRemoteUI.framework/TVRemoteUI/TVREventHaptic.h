@class UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

@interface TVREventHaptic : NSObject {
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

- (void).cxx_destruct;
- (void)playImpactEventHaptic;
- (void)playSelectionEventHaptic;

@end
