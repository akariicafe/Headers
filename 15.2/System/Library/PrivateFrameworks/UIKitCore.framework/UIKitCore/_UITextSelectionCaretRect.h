@interface _UITextSelectionCaretRect : UITextSelectionRect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)isVertical;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (BOOL)containsStart;

@end
