@class NSString, CNContactContentViewController;

@interface CNContactViewServiceViewController : UIViewController <CNContactViewHostProtocol, CNContactViewControllerPPTDelegate>

@property (retain, nonatomic) CNContactContentViewController *contactContentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForContentViewControllerImpl;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)didChangePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didCompleteWithContact:(id)a0;
- (void)didDeleteContact:(id)a0;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)isPresentingEditingController:(BOOL)a0;
- (void)isPresentingFullscreen:(BOOL)a0;
- (void)presentCancelConfirmationAlert;
- (BOOL)shouldPerformDefaultActionForContact:(id)a0 propertyKey:(id)a1 propertyIdentifier:(id)a2;
- (void)updateEditing:(BOOL)a0 doneButtonEnabled:(BOOL)a1 doneButtonText:(id)a2;
- (void)viewDidAppearForContactViewController:(id)a0;

@end
