@interface WKTextSelectionRect : UITextSelectionRect {
    struct SelectionRect { struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } m_rect; BOOL m_direction; int m_minX; int m_maxX; int m_maxY; int m_lineNumber; BOOL m_isLineBreak; BOOL m_isFirstOnLine; BOOL m_isLastOnLine; BOOL m_containsStart; BOOL m_containsEnd; BOOL m_isHorizontal; BOOL m_isInFixedPosition; BOOL m_isRubyText; int m_pageNumber; } _selectionRect;
}

- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)range;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (id).cxx_construct;
- (long long)writingDirection;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSelectionRect:(const struct SelectionRect { struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x0; BOOL x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; int x14; } *)a0;

@end
