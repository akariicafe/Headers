@class PXPeopleNameSelection, PXPeopleBootstrapContext, NSLayoutConstraint, NSString, UIView, PXPeopleNamePickerViewController, PHPerson;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController>

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
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
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)willTransitionToNextInFlow;
- (void)namePickerControllerWillChangeText:(id)a0;
- (void)namePickerController:(id)a0 didPickPerson:(id)a1;
- (void)namePickerController:(id)a0 didPickContact:(id)a1;
- (void)namePickerController:(id)a0 didPickString:(id)a1;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedTitleString;
- (void)_captureStringSelectionIfNeeded;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
