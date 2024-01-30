@interface _MNMapPointsArray : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct { double x0; double x1; } *mapPoints;
@property (readonly, nonatomic) struct Matrix<double, 2, 1> { double x0[2]; } *points;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;

@end
