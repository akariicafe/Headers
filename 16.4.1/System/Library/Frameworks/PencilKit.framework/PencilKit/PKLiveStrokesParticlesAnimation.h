@class NSArray;

@interface PKLiveStrokesParticlesAnimation : NSObject

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (void)_calculateBounds;
- (void).cxx_destruct;
- (id)initWithStrokes:(id)a0 startTime:(double)a1 duration:(double)a2 destinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)isDoneAtTime:(double)a0;

@end
