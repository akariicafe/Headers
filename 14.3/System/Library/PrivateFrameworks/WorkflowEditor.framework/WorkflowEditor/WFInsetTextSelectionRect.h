@class UITextSelectionRect;

@interface WFInsetTextSelectionRect : UITextSelectionRect

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) UITextSelectionRect *selectionRect;

- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void).cxx_destruct;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (long long)writingDirection;
- (id)initWithSelectionRect:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
