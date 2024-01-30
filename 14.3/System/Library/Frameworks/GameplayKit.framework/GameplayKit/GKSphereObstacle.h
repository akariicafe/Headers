@interface GKSphereObstacle : GKObstacle {
    struct SphericalObstacle { void /* function */ **_vptr$Obstacle; float radius; struct Vec3 { float x; float y; float z; } center; int _seenFrom; } _obstacle;
}

@property (nonatomic) float radius;
@property (nonatomic) void /* unknown type, empty encoding */ position;

+ (id)obstacleWithRadius:(float)a0;

- (id)init;
- (id)initWithRadius:(float)a0;
- (id).cxx_construct;
- (struct Obstacle { void /* function */ **x0; } *)obstacle;

@end
