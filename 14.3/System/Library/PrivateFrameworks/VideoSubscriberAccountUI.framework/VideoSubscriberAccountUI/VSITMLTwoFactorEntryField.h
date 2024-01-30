@class IKTextFieldElement, NSString;

@interface VSITMLTwoFactorEntryField : VSTwoFactorEntryTextField <IKAppKeyboardDelegate>

@property (retain, nonatomic) IKTextFieldElement *associatedTextFieldElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)textDidChangeForKeyboard:(id)a0;

@end
