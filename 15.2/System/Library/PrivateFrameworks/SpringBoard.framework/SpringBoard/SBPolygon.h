@class NSMutableArray;

@interface SBPolygon : NSObject

@property (retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints;
@property (nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint { double x; double y; } centroid;
@property (readonly, nonatomic, getter=_perimeter) double perimeter;
@property (retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights;
@property (nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint { double x; double y; } weightedCentroid;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) double distanceOfFarthestPointFromCentroid;

+ (id)_sortPoints:(id)a0;
+ (struct CGPoint { double x0; double x1; })_pointAtIndex:(unsigned long long)a0 ofPointArray:(id)a1;

- (void)_translate:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateProperties;
- (void)_scale:(double)a0;
- (id)points;
- (id)initWithPoints:(id)a0;
- (void)_applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGPoint { double x0; double x1; })_pointAtIndex:(unsigned long long)a0;
- (BOOL)_isLeftHanded;
- (unsigned long long)_thumbIndex;
- (void)enumeratePointsUsingBlock:(id /* block */)a0;
- (void)_updateCentroid;
- (void)_updateWeights;
- (void)_updateWeightedCentroid;
- (double)_weightAtIndex:(unsigned long long)a0;
- (double)_baseOrientation;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 pointCount:(unsigned long long)a1;
- (void)_flipHorizontally;
- (void)_rotate:(double)a0;
- (double)_meanFingertipRowAngle;
- (double)_meanRadius;

@end
