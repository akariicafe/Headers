@interface PUAlbumListCellContentViewAccessibility : __PUAlbumListCellContentViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)_deleteButton;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;
- (id)accessibilityLabel:(id)a0;
- (id)accessibilityHint:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (id)_accessibilityUserTestingChildren;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_accessibilityHitTestReverseOrder;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (void)_setAXCustomContentType:(id)a0;
- (BOOL)_axShowsDeleteButton;
- (id)_axTypeStringWithCount:(long long)a0;
- (BOOL)_axRenameAlbumAction;
- (id)_axCustomContentType;
- (void)_axSetCellCustomContentType:(id)a0;

@end
