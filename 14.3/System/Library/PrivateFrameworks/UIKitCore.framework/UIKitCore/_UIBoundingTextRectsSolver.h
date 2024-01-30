@class NSArray, NSLayoutManager, NSTextContainer;

@interface _UIBoundingTextRectsSolver : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _totalRect;
    struct _NSRange { unsigned long long location; unsigned long long length; } _firstGlyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastGlyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _middleGlyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _totalGlyphRange;
    BOOL _calculated;
    BOOL _unifyRects;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) NSArray *rects;

- (void).cxx_destruct;
- (id)initWithLayoutManager:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 unifyRects:(BOOL)a2;
- (id)description;
- (void)_calculate;
- (void)_calculateRectsUsingLayoutManager:(id)a0;
- (void)_calculateTotalRect;

@end
