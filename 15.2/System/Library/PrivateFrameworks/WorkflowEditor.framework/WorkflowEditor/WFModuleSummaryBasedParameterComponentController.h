@class NSString, WFModuleSummaryEditor;

@interface WFModuleSummaryBasedParameterComponentController : CKComponentController <WFModuleSummaryEditorDelegate>

@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)parameterLayoutTapped:(id)a0;

@end
