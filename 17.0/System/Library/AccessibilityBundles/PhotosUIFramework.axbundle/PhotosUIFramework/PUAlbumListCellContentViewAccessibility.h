@interface PUAlbumListCellContentViewAccessibility : __PUAlbumListCellContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)_deleteButton;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestReverseOrder;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (id)accessibilityHint:(id)a0;
- (id)accessibilityLabel:(id)a0;
- (id)_axCustomContentType;
- (BOOL)_axRenameAlbumAction;
- (void)_axSetCellCustomContentType:(id)a0;
- (BOOL)_axShowsDeleteButton;
- (id)_axTypeStringWithCount:(long long)a0;
- (void)_setAXCustomContentType:(id)a0;

@end
