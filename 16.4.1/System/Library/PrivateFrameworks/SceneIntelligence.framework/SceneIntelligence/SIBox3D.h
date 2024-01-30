@interface SIBox3D : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ extent;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transformFromBoxCorner;

+ (id)transformToNewCoordinate:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 current:(id)a1;

- (id)initWithTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithCornerTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void /* unknown type, empty encoding */)closestPoint:(SEL)a0;
- (void /* unknown type, empty encoding */)getCentroid;
- (float)signedDistanceFunction:(SEL)a0;
- (void)transformToNewCoordinate:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
