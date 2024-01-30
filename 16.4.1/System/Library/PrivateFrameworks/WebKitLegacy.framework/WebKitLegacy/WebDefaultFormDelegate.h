@class NSString;

@interface WebDefaultFormDelegate : NSObject <WebFormDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFormDelegate;

- (void)textFieldDidEndEditing:(id)a0 inFrame:(id)a1;
- (void)frame:(id)a0 sourceFrame:(id)a1 willSubmitForm:(id)a2 withValues:(id)a3 submissionListener:(id)a4;
- (void)didFocusTextField:(id)a0 inFrame:(id)a1;
- (void)textDidChangeInTextArea:(id)a0 inFrame:(id)a1;
- (void)textDidChangeInTextField:(id)a0 inFrame:(id)a1;
- (BOOL)textField:(id)a0 doCommandBySelector:(SEL)a1 inFrame:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0 inFrame:(id)a1;
- (void)willSendSubmitEventToForm:(id)a0 inFrame:(id)a1 withValues:(id)a2;

@end
