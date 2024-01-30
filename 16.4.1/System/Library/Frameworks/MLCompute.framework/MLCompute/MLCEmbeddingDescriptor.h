@class NSNumber;

@interface MLCEmbeddingDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *embeddingCount;
@property (readonly, nonatomic) NSNumber *embeddingDimension;
@property (readonly, nonatomic) NSNumber *paddingIndex;
@property (readonly, nonatomic) NSNumber *maximumNorm;
@property (readonly, nonatomic) NSNumber *pNorm;
@property (readonly, nonatomic) BOOL scalesGradientByFrequency;

+ (id)descriptorWithEmbeddingCount:(id)a0 embeddingDimension:(id)a1;
+ (id)descriptorWithEmbeddingCount:(id)a0 embeddingDimension:(id)a1 paddingIndex:(id)a2 maximumNorm:(id)a3 pNorm:(id)a4 scalesGradientByFrequency:(BOOL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEmbeddingCount:(id)a0 embeddingDimension:(id)a1 paddingIndex:(id)a2 maximumNorm:(id)a3 pNorm:(id)a4 scalesGradientByFrequency:(BOOL)a5;

@end
