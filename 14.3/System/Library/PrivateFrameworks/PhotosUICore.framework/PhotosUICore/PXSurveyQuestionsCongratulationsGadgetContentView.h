@class UISelectionFeedbackGenerator, PXRoundedCornerOverlayView, UILabel, UIImpactFeedbackGenerator, PXCapsuleButton;
@protocol PXSurveyQuestionCongratulationsGadgetContentViewDelegate, CKFullscreenEffectView;

@interface PXSurveyQuestionsCongratulationsGadgetContentView : UIView

@property (readonly, nonatomic) UILabel *congratulationsLabel;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) PXCapsuleButton *actionButton;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView;
@property (readonly, nonatomic) id<CKFullscreenEffectView> effectView;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (weak, nonatomic) id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDetailMessage:(id)a0 buttonTitle:(id)a1;
- (void)_didSelectActionButton;
- (void)startConfettiAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
