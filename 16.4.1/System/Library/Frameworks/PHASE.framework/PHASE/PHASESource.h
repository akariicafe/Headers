@class NSArray;

@interface PHASESource : PHASEObject {
    double _spatialResolution;
}

@property (nonatomic) double dopplerFactor;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) double spatialResolution;
@property (nonatomic) double gain;
@property (readonly, copy, nonatomic) NSArray *shapes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEngine:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 shapes:(id)a1;

@end
