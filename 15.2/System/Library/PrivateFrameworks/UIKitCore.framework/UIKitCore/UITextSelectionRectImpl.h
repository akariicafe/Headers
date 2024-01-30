@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect

@property (retain, nonatomic) WebSelectionRect *webRect;

+ (id)rectWithWebRect:(id)a0;
+ (id)rectsWithWebRects:(id)a0;

- (id)range;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)isVertical;
- (BOOL)containsEnd;
- (long long)writingDirection;
- (id)initWithWebRect:(id)a0;
- (BOOL)containsStart;
- (void)dealloc;

@end
