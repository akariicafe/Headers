@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popoverRectPlaceholder;

- (id)draggableView;
- (void)prepare;
- (void).cxx_destruct;
- (void)applyChanges:(id)a0;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)invalidatePopover;
- (BOOL)isEqual:(id)a0;
- (id)twoFingerDraggableView;
- (BOOL)isPopoverRequired;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrame;
- (void)invalidate;

@end
