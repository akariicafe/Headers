@class NSString, WFVariableEditingContext;

@interface WFTextInputComponentController : CKStatefulViewComponentController <WFTextTokenEditorViewDelegate, UITextViewDelegate>

@property (retain, nonatomic) WFVariableEditingContext *editingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForNewStatefulView:(id)a0;
+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;

- (id)field;
- (void).cxx_destruct;
- (void)textDidChange;
- (void)textTokenEditorTextDidBeginEditing:(id)a0;
- (void)textTokenEditorTextDidChange:(id)a0;
- (void)textTokenEditorTextDidEndEditing:(id)a0;
- (void)didAcquireStatefulView:(id)a0;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)willRelinquishStatefulView:(id)a0;
- (void)textDidChangeThrottled;

@end
