@class UIImpactFeedbackGenerator;

@interface GCControllerViewFeedback : NSObject {
    UIImpactFeedbackGenerator *_feedbackGeneratorHeavy;
    UIImpactFeedbackGenerator *_feedbackGeneratorLight;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)buttonDown;
- (void)thumbstickLimit;
- (void)buttonUp;

@end
