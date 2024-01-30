@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (readonly, nonatomic, getter=_isImpl) UITextSelectionRectImpl *isImpl;
@property (readonly, nonatomic) BOOL _drawsOwnHighlight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL containsStart;
@property (readonly, nonatomic) BOOL containsEnd;
@property (readonly, nonatomic) BOOL isVertical;

+ (id)startRectFromRects:(id)a0;
+ (id)endRectFromRects:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startEdgeFromRects:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endEdgeFromRects:(id)a0;
+ (BOOL)startIsHorizontal:(id)a0;
+ (BOOL)endIsHorizontal:(id)a0;

- (id)range;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
