@class UIActivityIndicatorView, NSString, VCUIShortcutViewController, WFWorkflowIcon, WFSharedShortcut, WFWorkflowRecord, WFWorkflow, WFGalleryWorkflow, UIBarButtonItem, WFImportQuestionContainerViewController;
@protocol WFGalleryImportViewControllerDelegate;

@interface WFGalleryImportViewController : UIViewController <WFImportQuestionContainerViewControllerDelegate, VCUIShortcutViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (nonatomic) unsigned long long currentImportQuestionIndex;
@property (readonly, nonatomic) BOOL skipServicesConfirmation;
@property (weak, nonatomic) VCUIShortcutViewController *shortcutViewController;
@property (weak, nonatomic) WFImportQuestionContainerViewController *importQuestionViewController;
@property (weak, nonatomic) UIBarButtonItem *rightButtonItem;
@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) BOOL showSharingManagement;
@property (weak, nonatomic) id<WFGalleryImportViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFGalleryWorkflow *galleryWorkflow;
@property (readonly, nonatomic) WFSharedShortcut *sharedShortcut;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) NSString *loggingContext;
@property (nonatomic) BOOL previewingFor3DTouch;
@property (nonatomic) BOOL importingSharedShortcut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView;
- (void).cxx_destruct;
- (void)loadView;
- (void)didTapCancel;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)didFinish;
- (void)didTapShare;
- (void)updateBarButtonItems;
- (void)trackAddEvent;
- (void)shortcutViewController:(id)a0 didFinishWithName:(id)a1;
- (void)shortcutViewControllerDidCancel:(id)a0;
- (void)importQuestionViewControllerDidSelectCancel:(id)a0;
- (void)importQuestionViewControllerDidSelectBack:(id)a0;
- (void)importQuestionViewControllerDidSelectNext:(id)a0;
- (void)importQuestionViewControllerDidSelectSkip:(id)a0;
- (id)initWithGalleryWorkflow:(id)a0 loggingContext:(id)a1;
- (id)initWithSharedShortcut:(id)a0 loggingContext:(id)a1;
- (id)initWithWorkflowRecord:(id)a0 loggingContext:(id)a1 skipServicesConfirmation:(BOOL)a2;
- (void)loadWorkflowIfNeeded;
- (id)localizedStopSharingString;
- (void)didTapManageSharing;
- (void)unshareSharedShortcut;
- (void)showNextImportQuestion;
- (void)showNextImportQuestionAnimated:(BOOL)a0 backButtonHidden:(BOOL)a1;
- (int)eventSourceForShortcut;

@end
