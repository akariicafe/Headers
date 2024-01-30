@class HUNewUserEducationStackView, UIToolbar, HUNewUserEducationWrapperViewModel, HUNewUserEducationCollectionViewController;
@protocol HUNewUserEducationWrapperViewDelegate;

@interface HUNewUserEducationWrapperView : UIView

@property (retain, nonatomic) HUNewUserEducationStackView *verticalStackView;
@property (retain, nonatomic) UIToolbar *bottomToolBar;
@property (retain, nonatomic) HUNewUserEducationCollectionViewController *instructionsCollectionViewController;
@property (retain, nonatomic) HUNewUserEducationWrapperViewModel *viewModel;
@property (weak, nonatomic) id<HUNewUserEducationWrapperViewDelegate> delegate;

- (void).cxx_destruct;
- (void)_onLearnMoreButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
