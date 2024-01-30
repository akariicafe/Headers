@class UILabel, PXPeopleBootstrapContext, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController>

@property (readonly, weak, nonatomic) UILabel *promptLabel;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) BOOL controlsAdvancementInternally;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateUI;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (id)_localizedPromptString;
- (id)_localizedDescriptionString;

@end
