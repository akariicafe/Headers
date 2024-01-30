@interface CKUIBehaviorHUDPad : CKUIBehaviorPad

- (id)theme;
- (BOOL)entryFieldShouldUseBackdropView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewVerticalCoverInsets;
- (BOOL)joystickUsesWindow;
- (BOOL)usesActionMenu;

@end
