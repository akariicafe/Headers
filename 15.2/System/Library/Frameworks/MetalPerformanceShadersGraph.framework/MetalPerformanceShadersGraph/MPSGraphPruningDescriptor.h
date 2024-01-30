@interface MPSGraphPruningDescriptor : NSObject <NSCopying>

@property (nonatomic) long long pruningMetric;
@property (nonatomic) long long pruningStructure;
@property (nonatomic) float sparsity;

+ (id)descriptorWithPruningMetric:(long long)a0 sparsityFormat:(long long)a1 sparsity:(float)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
