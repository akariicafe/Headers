@interface _MNMapPointWithIndex : NSObject

@property (nonatomic) struct Matrix<double, 2, 1> { double _e[2]; } point;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL isStartOfSegment;
@property (nonatomic) BOOL isPolylineA;
@property (nonatomic) BOOL isFlipped;
@property (nonatomic) struct LineSegment<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _origin; struct Matrix<double, 2, 1> { double _e[2]; } _direction; } segment;

- (id).cxx_construct;

@end
