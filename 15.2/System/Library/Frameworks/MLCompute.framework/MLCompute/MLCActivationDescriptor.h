@interface MLCActivationDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) int activationType;
@property (readonly, nonatomic) float a;
@property (readonly, nonatomic) float b;
@property (readonly, nonatomic) float c;

+ (id)descriptorWithType:(int)a0 a:(float)a1 b:(float)a2;
+ (id)descriptorWithType:(int)a0 a:(float)a1;
+ (id)descriptorWithType:(int)a0;
+ (void /* unknown type, empty encoding */)defaultParametersForType:(int)a0;
+ (id)descriptorWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;

- (id)initWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
