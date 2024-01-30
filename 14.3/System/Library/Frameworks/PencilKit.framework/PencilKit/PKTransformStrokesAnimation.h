@class NSArray;

@interface PKTransformStrokesAnimation : NSObject

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double fadeOutDuration;

- (void).cxx_destruct;
- (id)newStrokesAtTime:(double)a0;
- (id)initWithStrokes:(id)a0 startTime:(double)a1 duration:(double)a2 destinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 fadeOutDuration:(double)a4;
- (BOOL)isDoneAtTime:(double)a0;

@end
