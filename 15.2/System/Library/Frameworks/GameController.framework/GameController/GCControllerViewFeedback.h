@class UIImpactFeedbackGenerator;

@interface GCControllerViewFeedback : NSObject {
    UIImpactFeedbackGenerator *_feedbackGeneratorHeavy;
    UIImpactFeedbackGenerator *_feedbackGeneratorLight;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)buttonDown;
- (void)buttonUp;
- (void)thumbstickLimit;

@end
