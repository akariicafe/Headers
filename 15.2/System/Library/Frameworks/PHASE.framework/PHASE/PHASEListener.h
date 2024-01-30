@interface PHASEListener : PHASEObject

@property (nonatomic) double dopplerFactor;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) double gain;

+ (id)new;

- (id)initWithEngine:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
