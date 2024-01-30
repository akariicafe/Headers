@class EKEventEditor, UIColor, NSString, EKEventStore, EKEvent;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKUIManagedViewController> {
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    BOOL _completedWithAction;
}

@property (retain, nonatomic) EKEventEditor *editor;
@property (retain, nonatomic) EKEventEditViewController *strongSelf;
@property (nonatomic) BOOL showAttachments;
@property (nonatomic) BOOL scrollToNotes;
@property (nonatomic) BOOL canHideDoneAndCancelButtons;
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) int transitionForModalViewPresentation;
@property (nonatomic) double editorNavBarLeftContentInset;
@property (nonatomic) double editorNavBarRightContentInset;
@property (nonatomic) BOOL timeImplicitlySet;
@property (retain, nonatomic) NSString *suggestionKey;
@property (readonly, nonatomic) BOOL displayingRootView;
@property (nonatomic) BOOL ignoreUnsavedChanges;
@property (weak, nonatomic) id<EKEventEditViewDelegate> editViewDelegate;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultDatesForEvent:(id)a0;
+ (id)eventEditViewControllerWithEvent:(id)a0 eventStore:(id)a1 editViewDelegate:(id)a2;

- (BOOL)hasUnsavedChanges;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_storeChanged:(id)a0;
- (BOOL)canManagePresentationStyle;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isModalInPresentation;
- (BOOL)wantsManagement;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_leftBarButtonItem;
- (id)_rightBarButtonItem;
- (void)editor:(id)a0 didCompleteWithAction:(long long)a1;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(long long)a0 animated:(BOOL)a1;
- (void)cancelEditingWithDelegateNotification:(BOOL)a0 forceCancel:(BOOL)a1;
- (void)presentationControllerDidAttemptToDismissWithPendingConference:(id)a0;
- (void)handleTapOutside;
- (void)completeAndSave;
- (void)completeAndSaveWithContinueBlock:(id /* block */)a0;
- (BOOL)willPresentDialogOnSave;
- (id)_confirmDismissAlertExplanationText;
- (id)confirmDismissAlertController;
- (id)confirmPendingConferenceDismissAlertController;
- (void)cancelEditing;
- (BOOL)editor:(id)a0 shouldCompleteWithAction:(long long)a1;
- (void)editor:(id)a0 prepareCalendarItemForEdit:(id)a1;
- (void)focusAndSelectTitle;
- (void)focusAndSelectStartDate;
- (void)focusTitle;
- (id)_eventEditorForTestingOnly;

@end
