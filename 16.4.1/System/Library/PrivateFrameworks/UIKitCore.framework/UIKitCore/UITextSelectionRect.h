@class UITextSelectionRectImpl, UIBezierPath, UITextSelectionRectCustomHandleInfo;

@interface UITextSelectionRect : NSObject

@property (readonly, nonatomic, getter=_isImpl) UITextSelectionRectImpl *isImpl;
@property (readonly, nonatomic) BOOL _drawsOwnHighlight;
@property (readonly, nonatomic) UIBezierPath *_path;
@property (readonly, nonatomic) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL containsStart;
@property (readonly, nonatomic) BOOL containsEnd;
@property (readonly, nonatomic) BOOL isVertical;

+ (id)endCustomSelectionPathFromRects:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endEdgeFromRects:(id)a0;
+ (BOOL)endIsHorizontal:(id)a0;
+ (id)endRectFromRects:(id)a0;
+ (id)startCustomSelectionPathFromRects:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startEdgeFromRects:(id)a0;
+ (BOOL)startIsHorizontal:(id)a0;
+ (id)startRectFromRects:(id)a0;

- (id)range;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
