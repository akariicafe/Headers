@class NSString, UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
    UIWebBrowserView *_webBrowserView;
    _UIWebFormDelegateEditedFormsMap *_editedForms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0 inFrame:(id)a1;
- (void)frame:(id)a0 sourceFrame:(id)a1 willSubmitForm:(id)a2 withValues:(id)a3 submissionListener:(id)a4;
- (void)_clearEditedFormsInFrame:(id)a0;
- (void)_didEditFormElement:(id)a0 inFrame:(id)a1;
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)a0;
- (void)acceptedAutoFillWord:(id)a0;
- (void)dataSourceHasChangedForFrame:(id)a0;
- (void)didFocusTextField:(id)a0 inFrame:(id)a1;
- (BOOL)formWasEdited;
- (BOOL)hasCurrentSuggestions;
- (id)initWithWebBrowserView:(id)a0;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;
- (void)textDidChangeInTextArea:(id)a0 inFrame:(id)a1;
- (void)textDidChangeInTextField:(id)a0 inFrame:(id)a1;
- (BOOL)textField:(id)a0 doCommandBySelector:(SEL)a1 inFrame:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0 inFrame:(id)a1;
- (void)willSendSubmitEventToForm:(id)a0 inFrame:(id)a1 withValues:(id)a2;

@end
