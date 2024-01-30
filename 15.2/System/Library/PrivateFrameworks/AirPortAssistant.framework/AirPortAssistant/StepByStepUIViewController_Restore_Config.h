@class UILabel, UIView;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {
    UILabel *restoreRecommendationLabel;
    UILabel *dontRestoreRecommendationLabel;
    BOOL dontRestore;
}

@property (retain, nonatomic) UIView *restoreRecommendationContainerView;
@property (retain, nonatomic) UIView *dontRestoreRecommendationContainerView;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)dealloc;
- (void)setupInitialTableHeaderConfiguration;

@end
