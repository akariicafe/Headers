@class NSString, UIActionSheet, UIView;

@interface TSKUIActionSheet : TSKAbstractAlert <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    UIView *_targetView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertWithTitle:(id)a0 cancelButtonTitle:(id)a1 destructiveButtonTitle:(id)a2 otherButtonTitle:(id)a3 targetView:(id)a4;

- (void)dealloc;
- (long long)numberOfButtons;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)actionSheet:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (long long)addButtonWithTitle:(id)a0;
- (id)buttonTitleAtIndex:(long long)a0;
- (long long)cancelButtonIndex;
- (void)didPresentActionSheet:(id)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (long long)firstOtherButtonIndex;
- (void)setCancelButtonIndex:(long long)a0;
- (void)willPresentActionSheet:(id)a0;
- (void)showAlert;
- (id)initWithTitle:(id)a0 cancelButtonTitle:(id)a1 destructiveButtonTitle:(id)a2 otherButtonTitle:(id)a3 targetView:(id)a4;

@end
