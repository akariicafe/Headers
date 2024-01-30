@class UILabel, PXCapsuleButton, UISelectionFeedbackGenerator;
@protocol PXSurveyQuestionConfiguration, PXSurveyQuestionsGadgetContentViewDelegate;

@interface PXSurveyQuestionsGadgetContentView : UICollectionViewCell

@property (nonatomic) BOOL isInvalid;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) PXCapsuleButton *yesButton;
@property (retain, nonatomic) PXCapsuleButton *noButton;
@property (retain, nonatomic) PXCapsuleButton *skipButton;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) id<PXSurveyQuestionConfiguration> configuration;
@property (weak, nonatomic) id<PXSurveyQuestionsGadgetContentViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) BOOL contentHidden;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (id)keyCommands;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsInCoordinateSpace:(id)a0;
- (id)focusEffect;
- (struct CGSize { double x0; double x1; })_calculateLayoutWithInputSize:(struct CGSize { double x0; double x1; })a0 apply:(BOOL)a1;
- (void)updateButtonsWithAnswerState:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_actionButtonWithTitle:(id)a0 action:(SEL)a1 buttonColor:(id)a2 titleColor:(id)a3;
- (void)_didAnswerYes;
- (void)_didAnswerNo;
- (void)_didAnswerSkip;
- (void)_didAnswer:(unsigned long long)a0;
- (void)_askForAdditionalReasonForAnswer:(unsigned long long)a0 completionBlock:(id /* block */)a1;

@end
