@class PXPeopleBootstrapContext, UILabel, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController>

@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, weak, nonatomic) UILabel *promptLabel;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)updateUI;
- (void).cxx_destruct;
- (id)_localizedPromptString;
- (id)_localizedDescriptionString;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
