@class UITextSelectionRect;

@interface WFInsetTextSelectionRect : UITextSelectionRect

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) UITextSelectionRect *selectionRect;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)isVertical;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (void).cxx_destruct;
- (BOOL)containsStart;
- (id)initWithSelectionRect:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
