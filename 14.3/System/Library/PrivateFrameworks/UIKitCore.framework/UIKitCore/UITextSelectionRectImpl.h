@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect

@property (retain, nonatomic) WebSelectionRect *webRect;

+ (id)rectWithWebRect:(id)a0;
+ (id)rectsWithWebRects:(id)a0;

- (BOOL)isVertical;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)range;
- (void)dealloc;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (long long)writingDirection;
- (id)initWithWebRect:(id)a0;

@end
