@class NSString, UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
    UIWebBrowserView *_webBrowserView;
    _UIWebFormDelegateEditedFormsMap *_editedForms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)frame:(id)a0 sourceFrame:(id)a1 willSubmitForm:(id)a2 withValues:(id)a3 submissionListener:(id)a4;
- (void)dealloc;
- (BOOL)formWasEdited;
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)a0;
- (void)_didEditFormElement:(id)a0 inFrame:(id)a1;
- (void)_clearEditedFormsInFrame:(id)a0;
- (BOOL)hasCurrentSuggestions;
- (void)acceptedAutoFillWord:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0 inFrame:(id)a1;
- (id)initWithWebBrowserView:(id)a0;
- (void)textFieldDidEndEditing:(id)a0 inFrame:(id)a1;
- (void)didFocusTextField:(id)a0 inFrame:(id)a1;
- (void)textDidChangeInTextField:(id)a0 inFrame:(id)a1;
- (void)textDidChangeInTextArea:(id)a0 inFrame:(id)a1;
- (BOOL)textField:(id)a0 doCommandBySelector:(SEL)a1 inFrame:(id)a2;
- (void)willSendSubmitEventToForm:(id)a0 inFrame:(id)a1 withValues:(id)a2;
- (void)dataSourceHasChangedForFrame:(id)a0;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;

@end
