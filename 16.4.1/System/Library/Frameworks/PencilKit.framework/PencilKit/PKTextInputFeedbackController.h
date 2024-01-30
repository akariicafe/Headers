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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_placeholderChanged:(id)a0;
- (BOOL)_shouldShowCustomFeedback;
- (void)_updateFeedbackState;
- (void)_updateFeedbackView;
- (void)beginDisplayForReserveSpacePlaceholder:(id)a0;
- (void)cancelShowingReserveSpaceIntro;
- (void)endDisplayForReserveSpacePlaceholder:(id)a0;
- (void)setReferenceElementContent:(id)a0 referenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 feedbackType:(long long)a2;

@end
