@class NSMutableSet, UISelectionFeedbackGenerator, _UIButtonFeedbackGenerator;

@interface CAMFeedbackController : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *_modeSelectionFeedbackGenerator;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_burstCountFeedbackGenerator;
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;
@property (readonly, nonatomic) NSMutableSet *_activePairedFeedbackGenerators;

- (id)init;
- (void).cxx_destruct;
- (id)_feedbackGeneratorForDiscreteFeedback:(unsigned long long)a0;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)a0;
- (id)_debugStringForPairedFeedback:(unsigned long long)a0;
- (void)prepareDiscreteFeedback:(unsigned long long)a0;
- (void)performDiscreteFeedback:(unsigned long long)a0;
- (void)prepareButtonFeedback:(unsigned long long)a0;
- (void)performPressButtonFeedback:(unsigned long long)a0;
- (void)performReleaseButtonFeedback:(unsigned long long)a0;

@end
