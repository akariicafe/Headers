@class EKEventEditor, UIColor, NSString, EKEventStore, EKEvent;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKCalendarItemEditorDelegate, EKUIManagedViewController> {
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
@property (retain, nonatomic) NSString *eventCreationMethod;
@property (weak, nonatomic) id<EKEventEditViewDelegate> editViewDelegate;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultDatesForEvent:(id)a0;
+ (id)eventEditViewControllerWithEvent:(id)a0 eventStore:(id)a1 editViewDelegate:(id)a2;

- (BOOL)shouldAutorotate;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)dealloc;
- (void)_storeChanged:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)hasUnsavedChanges;
- (void)attemptDisplayReviewPrompt;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canManagePresentationStyle;
- (void).cxx_destruct;
- (BOOL)wantsManagement;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (id)_rightBarButtonItem;
- (void)presentationControllerDidAttemptToDismissWithPendingConference:(id)a0;
- (void)completeAndSave;
- (id)_confirmDismissAlertExplanationText;
- (id)_eventEditorForTestingOnly;
- (id)_leftBarButtonItem;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(BOOL)a0 forceCancel:(BOOL)a1;
- (void)completeAndSaveWithContinueBlock:(id /* block */)a0;
- (id)confirmDismissAlertController;
- (id)confirmPendingConferenceDismissAlertController;
- (void)editor:(id)a0 didCompleteWithAction:(long long)a1;
- (void)editor:(id)a0 prepareCalendarItemForEdit:(id)a1;
- (BOOL)editor:(id)a0 shouldCompleteWithAction:(long long)a1;
- (id)editorForCalendarItemEditor:(id)a0;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (void)handleTapOutside;
- (id)pasteboardManagerForCalendarItemEditor:(id)a0;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(long long)a0 animated:(BOOL)a1;
- (BOOL)willPresentDialogOnSave;

@end
