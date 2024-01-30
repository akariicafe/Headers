@class UITextRange;

@interface TSDTextSelectionRect : UITextSelectionRect {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    long long _writingDirection;
    BOOL _containsStart;
    BOOL _containsEnd;
    BOOL _isVertical;
}

@property (retain, nonatomic) UITextRange *range;

- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)dealloc;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (long long)writingDirection;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 direction:(long long)a1 range:(id)a2 containsStart:(BOOL)a3 containsEnd:(BOOL)a4 isVertical:(BOOL)a5;

@end
