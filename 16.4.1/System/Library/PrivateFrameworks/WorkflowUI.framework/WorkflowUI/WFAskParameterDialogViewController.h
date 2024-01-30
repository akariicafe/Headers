@class WFParameterEditorHostingCell, NSString, WFCompactUnlockService, UIButton, WFAction, WFModuleSummaryEditor, WFWorkflow, WFSlotTemplateSlot;

@interface WFAskParameterDialogViewController : WFCompactDialogViewController <WFModuleSummaryEditorDelegate, WFParameterEditorHostingCellDelegate>

@property (retain, nonatomic) WFWorkflow *fakeWorkflow;
@property (retain, nonatomic) WFAction *fakeAction;
@property (retain, nonatomic) WFParameterEditorHostingCell *hostingCell;
@property (retain, nonatomic) WFModuleSummaryEditor *summaryEditor;
@property (retain, nonatomic) WFSlotTemplateSlot *summarySlot;
@property (retain, nonatomic) UIButton *modalButton;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleButtonSlotForParameter:(id)a0 state:(id)a1;

- (id)initWithRequest:(id)a0;
- (void)done;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)shouldInstallBannerDimmingLayer;
- (BOOL)allowsInteractiveDismiss;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (id)initialStateForSummaryEditor:(id)a0;
- (void)modalButtonTapped:(id)a0;
- (void)parameterEditorCell:(id)a0 didUpdateParameterState:(id)a1;
- (void)parameterEditorCellDidInvalidateSize:(id)a0;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)summaryEditorDidRequestTextEntry:(id)a0;

@end
