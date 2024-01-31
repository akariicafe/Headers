@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNContactViewExtensionContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewServiceProtocol, CNContactViewHostProtocol>

@property (nonatomic) BOOL asyncShouldPerformResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *asyncShouldPerformSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)viewDidAppear;
- (id)host;
- (void).cxx_destruct;
- (void)asyncShouldPerformDefaultActionForContact:(id)a0 propertyKey:(id)a1 propertyIdentifier:(id)a2;
- (void)asyncShouldPerformDefaultActionResponse:(BOOL)a0;
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

@end
