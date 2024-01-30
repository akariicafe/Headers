@interface MLCMatMulDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) float alpha;
@property (readonly, nonatomic) BOOL transposesX;
@property (readonly, nonatomic) BOOL transposesY;

+ (id)descriptor;
+ (id)descriptorWithAlpha:(float)a0 transposesX:(BOOL)a1 transposesY:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAlpha:(float)a0 transposesX:(BOOL)a1 transposesY:(BOOL)a2;

@end
