@class NSString;

@interface CNContactViewServiceViewController : CNContactContentViewController <CNContactViewHostProtocol, CNContactViewControllerPPTDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOutOfProcess;
- (void)didDeleteContact:(id)a0;
- (void)didCompleteWithContact:(id)a0;
- (void)viewDidAppearForContactViewController:(id)a0;
- (BOOL)shouldPerformDefaultActionForContact:(id)a0 propertyKey:(id)a1 propertyIdentifier:(id)a2;
- (void)updateEditing:(BOOL)a0 doneButtonEnabled:(BOOL)a1 doneButtonText:(id)a2;
- (void)isPresentingFullscreen:(BOOL)a0;
- (void)isPresentingEditingController:(BOOL)a0;
- (void)didChangePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)presentCancelConfirmationAlert;
- (id)init;
- (void)viewDidAppear;

@end
