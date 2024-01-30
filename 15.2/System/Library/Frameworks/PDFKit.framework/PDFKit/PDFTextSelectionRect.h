@class PDFPage;

@interface PDFTextSelectionRect : UITextSelectionRect {
    PDFPage *_page;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    BOOL _isStartingRect;
    BOOL _isEndingRect;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)description;
- (BOOL)isVertical;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (void).cxx_destruct;
- (BOOL)containsStart;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPage:(id)a1;
- (void)setIsStartingRect:(BOOL)a0;
- (void)setIsEndingRect:(BOOL)a0;

@end
