@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect

@property (retain, nonatomic) WebSelectionRect *webRect;

+ (id)rectWithWebRect:(id)a0;
+ (id)rectsWithWebRects:(id)a0;

- (BOOL)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void).cxx_destruct;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (id)initWithWebRect:(id)a0;
- (long long)writingDirection;

@end
