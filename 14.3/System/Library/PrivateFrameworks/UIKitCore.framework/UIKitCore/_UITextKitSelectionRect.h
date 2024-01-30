@interface _UITextKitSelectionRect : UITextSelectionRect

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) long long writingDirection;
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic, setter=_setDrawsOwnHighlight:) BOOL _drawsOwnHighlight;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;

- (id)description;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;

@end
