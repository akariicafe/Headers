@interface PUAlbumListCellContentViewAccessibility : __PUAlbumListCellContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_deleteButton;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityPerformEscape;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityValue;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHitTestReverseOrder;
- (void)_accessibilityLoadAccessibilityInformation;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;
- (id)accessibilityLabel:(id)a0;
- (id)accessibilityHint:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (void)_setAXCustomContentType:(id)a0;
- (BOOL)_axShowsDeleteButton;
- (id)_axTypeStringWithCount:(long long)a0;
- (BOOL)_axRenameAlbumAction;
- (id)_axCustomContentType;
- (void)_axSetCellCustomContentType:(id)a0;

@end
