@class UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, PXRoundedCornerOverlayView, UILabel, UIView, PXCapsuleButton;
@protocol PXSurveyQuestionCongratulationsGadgetContentViewDelegate, _PXCKFullscreenEffectView;

@interface PXSurveyQuestionsCongratulationsGadgetContentView : UIView

@property (readonly, nonatomic) UILabel *congratulationsLabel;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) PXCapsuleButton *actionButton;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView;
@property (readonly, nonatomic) UIView<_PXCKFullscreenEffectView> *effectView;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (weak, nonatomic) id<PXSurveyQuestionCongratulationsGadgetContentViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_didSelectActionButton;
- (id)initWithDetailMessage:(id)a0 buttonTitle:(id)a1;
- (void)startConfettiAnimation;

@end
