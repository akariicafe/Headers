@interface ARSceneReconstructionOptions : NSObject <NSCopying>

@property (nonatomic) long long voxelSize;
@property (nonatomic) long long bucketsCount;
@property (nonatomic) long long preset;
@property (nonatomic) BOOL deterministicMode;
@property (nonatomic) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL enableOccupancyMapping;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
