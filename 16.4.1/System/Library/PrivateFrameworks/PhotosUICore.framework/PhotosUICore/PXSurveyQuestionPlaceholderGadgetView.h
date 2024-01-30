@class UIContentUnavailableView, UIContentUnavailableConfiguration;
@protocol PXSurveyQuestionPlaceholderGadgetViewDelegate;

@interface PXSurveyQuestionPlaceholderGadgetView : UICollectionViewCell {
    UIContentUnavailableView *_contentUnavailableView;
}

@property (weak, nonatomic) id<PXSurveyQuestionPlaceholderGadgetViewDelegate> delegate;
@property (copy, nonatomic) UIContentUnavailableConfiguration *placeholderContentUnavailableConfiguration;
@property (copy, nonatomic) UIContentUnavailableConfiguration *loadingContentUnavailableConfiguration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_performContentUnavailableButtonAction;
- (void)_restorePlaceholderContentUnavailableConfiguration;

@end
