@protocol UICoordinateSpace;

@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } _point;
@property (readonly, nonatomic) id<UICoordinateSpace> _coordinateSpace;

- (id)init;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
