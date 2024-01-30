@class PKTextInputElementContent, PKTextInputGestureFeedbackView, PKTextInputTextPlaceholder;
@protocol PKTextInputFeedbackControllerDelegate;

@interface PKTextInputFeedbackController : NSObject

@property (retain, nonatomic) PKTextInputElementContent *referenceElementContent;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } referenceTextRange;
@property (retain, nonatomic) PKTextInputTextPlaceholder *placeholder;
@property (nonatomic) long long feedbackType;
@property (nonatomic, setter=_setShowingCustomFeedback:) BOOL showingCustomFeedback;
@property (retain, nonatomic) PKTextInputGestureFeedbackView *_feedbackView;
@property (weak, nonatomic) id<PKTextInputFeedbackControllerDelegate> delegate;
@property (readonly, nonatomic) PKTextInputTextPlaceholder *reserveSpacePlaceholder;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setReferenceElementContent:(id)a0 referenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 feedbackType:(long long)a2;
- (void)beginDisplayForReserveSpacePlaceholder:(id)a0;
- (void)cancelShowingReserveSpaceIntro;
- (void)endDisplayForReserveSpacePlaceholder:(id)a0;
- (void)_placeholderChanged:(id)a0;
- (BOOL)_shouldShowCustomFeedback;
- (void)_updateFeedbackView;
- (void)_updateFeedbackState;

@end
