@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popoverRectPlaceholder;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrame;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (void)applyChanges:(id)a0;
- (void)invalidatePopover;
- (void)prepare;
- (id)draggableView;
- (BOOL)isPopoverRequired;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)startingPropertiesFromPlacementProperties:(id)a0;
- (id)twoFingerDraggableView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scaledPopoverTransform;
- (void)invalidate;
- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;

@end
