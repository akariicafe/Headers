@class CUShutterButton, NSMutableSet, _UIButtonFeedbackGenerator;

@interface CFXFeedbackController : NSObject

@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;
@property (readonly, nonatomic) NSMutableSet *_activePairedFeedbackGenerators;
@property (readonly, nonatomic) CUShutterButton *shutterButton;
@property (nonatomic) unsigned long long feedbackToPerform;

- (void)performPressButtonFeedback:(unsigned long long)a0;
- (void)prepareButtonFeedback:(unsigned long long)a0;
- (id)_debugStringForPairedFeedback:(unsigned long long)a0;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)a0;
- (void)performReleaseButtonFeedback:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithShutterButton:(id)a0;
- (void)shutterButtonDown:(id)a0;
- (unsigned long long)shutterButtonFeedbackForCurrentConfiguration;
- (void)shutterButtonUp:(id)a0;

@end
