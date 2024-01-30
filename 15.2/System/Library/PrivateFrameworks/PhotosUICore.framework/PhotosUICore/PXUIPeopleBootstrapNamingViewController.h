@class PHPerson, NSLayoutConstraint, NSString, PXPeopleBootstrapContext, UIView, PXPeopleNamePickerViewController, PXPeopleNameSelection;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController>

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) PXPeopleNamePickerViewController *namePicker;
@property (retain, nonatomic) PXPeopleNameSelection *selection;
@property (retain, nonatomic) UIView *pickerBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *pickerBackgroundViewHeightConstraint;
@property (nonatomic) BOOL textDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) BOOL controlsAdvancementInternally;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)willTransitionToNextInFlow;
- (void)namePickerControllerWillChangeText:(id)a0;
- (void)namePickerController:(id)a0 didPickPerson:(id)a1;
- (void)namePickerController:(id)a0 didPickContact:(id)a1;
- (void)namePickerController:(id)a0 didPickString:(id)a1;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (void)_captureStringSelectionIfNeeded;

@end
