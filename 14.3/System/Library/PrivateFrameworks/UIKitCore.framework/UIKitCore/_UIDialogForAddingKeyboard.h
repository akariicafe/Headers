@class UINavigationController, UIWindow;

@interface _UIDialogForAddingKeyboard : NSObject {
    UIWindow *_presenterWindow;
    UINavigationController *_privacySheetController;
}

+ (void)presentDialogForAddingKeyboard;

- (void)presentDialogForAddingKeyboard;
- (void)presentPrivacySheet;
- (void)dismiss;

@end
