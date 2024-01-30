@class UIInterfaceAction;

@interface CKActionSheetMenuView_QSExtras : __CKActionSheetMenuView_QSExtras_super

@property (retain, nonatomic, setter=_accessibilitySetInterfaceAction:) UIInterfaceAction *_accessibilityInterfaceAction;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithTitle:(id)a0 interfaceActions:(id)a1;
- (id)_axInterfaceActionForSpeakSelection;

@end
