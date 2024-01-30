@interface MLCMultiheadAttentionDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL hasKeyPaddingMask;
@property (nonatomic) BOOL hasAttentionMask;
@property (readonly, nonatomic) unsigned long long modelDimension;
@property (readonly, nonatomic) unsigned long long keyDimension;
@property (readonly, nonatomic) unsigned long long valueDimension;
@property (readonly, nonatomic) unsigned long long headCount;
@property (readonly, nonatomic) float dropout;
@property (readonly, nonatomic) BOOL hasBiases;
@property (readonly, nonatomic) BOOL hasAttentionBiases;
@property (readonly, nonatomic) BOOL addsZeroAttention;

+ (id)descriptorWithModelDimension:(unsigned long long)a0 headCount:(unsigned long long)a1;
+ (id)descriptorWithModelDimension:(unsigned long long)a0 keyDimension:(unsigned long long)a1 valueDimension:(unsigned long long)a2 headCount:(unsigned long long)a3 dropout:(float)a4 hasBiases:(BOOL)a5 hasAttentionBiases:(BOOL)a6 addsZeroAttention:(BOOL)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithModelDimension:(unsigned long long)a0 keyDimension:(unsigned long long)a1 valueDimension:(unsigned long long)a2 headCount:(unsigned long long)a3 dropout:(float)a4 hasBias:(BOOL)a5 hasAttentionBias:(BOOL)a6 addsZeroAttention:(BOOL)a7;

@end
