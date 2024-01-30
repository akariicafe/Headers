@class NSCalendar;

@interface HKDateCoordinateTransform : HKCoordinateTransform

@property (retain, nonatomic) NSCalendar *currentCalendar;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)coordinateForValue:(id)a0;
- (id)initWithCurrentCalendar:(id)a0;
- (id)valueForCoordinate:(double)a0;

@end
