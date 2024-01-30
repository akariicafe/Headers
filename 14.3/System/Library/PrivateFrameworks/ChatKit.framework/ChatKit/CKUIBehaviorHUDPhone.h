@interface CKUIBehaviorHUDPhone : CKUIBehaviorPhone

- (id)theme;
- (BOOL)entryFieldShouldUseBackdropView;
- (BOOL)joystickUsesWindow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewVerticalCoverInsets;
- (BOOL)usesActionMenu;

@end
