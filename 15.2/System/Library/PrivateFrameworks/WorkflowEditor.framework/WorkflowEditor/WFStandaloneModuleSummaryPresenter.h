@class WFSlotIdentifier, NSString, WFModalPresentationAnchor, WFModuleSummaryEditor;
@protocol WFStandaloneModuleSummaryPresenterDelegate;

@interface WFStandaloneModuleSummaryPresenter : NSObject <WFModuleSummaryEditorDelegate>

@property (retain, nonatomic) WFModuleSummaryEditor *editor;
@property (readonly, nonatomic) WFSlotIdentifier *slotIdentifier;
@property (readonly, nonatomic) WFModalPresentationAnchor *presentationAnchor;
@property (weak, nonatomic) id<WFStandaloneModuleSummaryPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void).cxx_destruct;
- (void)present;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 initialState:(id)a2 isProcessing:(BOOL)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 presentationAnchor:(id)a6;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;

@end
