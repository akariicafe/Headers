@class NSString;

@interface UIKeyboardHiddenViewController_Autofill : UIKeyboardHiddenViewController <_SFAppAutoFillPasswordViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customInfoFromCredential:(id)a0;
- (BOOL)isValidedString:(id)a0;
- (void)presentViewController:(BOOL)a0;
- (void)passwordViewController:(id)a0 selectedCredential:(id)a1;
- (void)setAutofillVC:(id)a0;

@end
