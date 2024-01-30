@interface CKUIBehaviorHUDPad : CKUIBehaviorPad

- (id)theme;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewHorizontalCoverInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewVerticalCoverInsets;
- (BOOL)usesActionMenu;
- (BOOL)entryFieldShouldUseBackdropView;
- (BOOL)joystickUsesWindow;

@end
