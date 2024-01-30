@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)_textDidChange:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)dealloc;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (BOOL)resignFirstResponder;
- (id)_nativeObjectDelegate;
- (void)_sendScriptDidChange;
- (void)_setNativeObjectDelegate:(id)a0;
- (void)_textDidEndEditingOnExit:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
