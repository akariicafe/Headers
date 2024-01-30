@class UIImage, UIImageView, PKContinuousButton;
@protocol PKPassShareActivationExternalKeyEducationViewDelegate;

@interface PKPassShareActivationExternalKeyEducationView : UIView {
    id<PKPassShareActivationExternalKeyEducationViewDelegate> _delegate;
    UIImageView *_educationImageView;
    PKContinuousButton *_nextButton;
}

@property (retain, nonatomic) UIImage *educationImage;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_nextButtonPressed;
- (id)initWithContinueButtonText:(id)a0 delegate:(id)a1;

@end
