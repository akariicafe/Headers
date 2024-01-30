@interface MUCoordinateStringFormatter : NSObject

@property (nonatomic, getter=isCoarseLocation) BOOL coarseLocation;

- (id)_coordinatePartStringForValue:(double)a0 positiveSymbol:(int)a1 negativeSymbol:(int)a2;
- (id)stringFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
