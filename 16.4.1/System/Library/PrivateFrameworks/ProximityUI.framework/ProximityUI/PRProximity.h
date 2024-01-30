@interface PRProximity : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) float range;
@property (readonly, nonatomic) float azimuth;
@property (readonly, nonatomic) float elevation;
@property (readonly, nonatomic) BOOL azimuthIsValid;
@property (readonly, nonatomic) BOOL elevationIsValid;

- (void /* unknown type, empty encoding */)vector;
- (id)initWithTime:(double)a0 range:(float)a1;
- (id)initWithTime:(double)a0 range:(float)a1 azimuth:(float)a2 elevation:(float)a3;

@end
