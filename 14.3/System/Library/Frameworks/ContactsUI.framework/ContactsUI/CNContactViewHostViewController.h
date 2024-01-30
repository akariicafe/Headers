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

+ (id)contactViewExtension;
+ (BOOL)getViewController:(id /* block */)a0;
+ (id)contextForIdentifier:(id)a0;

- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)editCancel;
- (void)didCompleteWithContact:(id)a0;
- (BOOL)shouldPerformDefaultActionForContact:(id)a0 propertyKey:(id)a1 propertyIdentifier:(id)a2;
- (void)toggleEditing;
- (void)updateEditing:(BOOL)a0 doneButtonEnabled:(BOOL)a1 doneButtonText:(id)a2;
- (void)didDeleteContact:(id)a0;
- (void)isPresentingFullscreen:(BOOL)a0;
- (void)isPresentingEditingController:(BOOL)a0;
- (void)didChangeToEditMode:(BOOL)a0;
- (void)didChangePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)presentCancelConfirmationAlert;
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (void)didChangeToShowTitle:(BOOL)a0;
- (void)performConfirmedCancel;
- (void)viewWillAppear:(BOOL)a0;
- (id)protocolContext;
- (void)invalidate;

@end
