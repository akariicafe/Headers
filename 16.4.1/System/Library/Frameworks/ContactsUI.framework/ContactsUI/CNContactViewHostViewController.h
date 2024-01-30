@class NSString, NSExtension;
@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, NSCopying;

@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol>

@property (retain, nonatomic) id<NSCopying> currentRequestIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (weak, nonatomic) id<CNContactViewHostProtocol> delegate;
@property (weak, nonatomic) id<CNContactViewControllerPPTDelegate> pptDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForIdentifier:(id)a0;
+ (id)contactViewExtension;
+ (BOOL)getViewController:(id /* block */)a0;

- (void)viewDidAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)protocolContext;
- (void)didChangePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didChangeToEditMode:(BOOL)a0;
- (void)didChangeToShowTitle:(BOOL)a0;
- (void)didCompleteWithContact:(id)a0;
- (void)didDeleteContact:(id)a0;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)editCancel;
- (void)isPresentingEditingController:(BOOL)a0;
- (void)isPresentingFullscreen:(BOOL)a0;
- (void)performConfirmedCancel;
- (void)presentCancelConfirmationAlert;
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (BOOL)shouldPerformDefaultActionForContact:(id)a0 propertyKey:(id)a1 propertyIdentifier:(id)a2;
- (void)toggleEditing;
- (void)updateEditing:(BOOL)a0 doneButtonEnabled:(BOOL)a1 doneButtonText:(id)a2;
- (void)viewServiceDidTerminate;

@end
