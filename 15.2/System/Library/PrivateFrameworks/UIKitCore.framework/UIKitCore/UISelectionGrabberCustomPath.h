@interface UISelectionGrabberCustomPath : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } topPoint;
@property (nonatomic) struct CGPoint { double x; double y; } bottomPoint;
@property (nonatomic) double lineWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingEdgeRect;
@property (readonly, nonatomic) BOOL containsZeroPoint;

- (id)summaryDescription;
- (id)description;

@end
