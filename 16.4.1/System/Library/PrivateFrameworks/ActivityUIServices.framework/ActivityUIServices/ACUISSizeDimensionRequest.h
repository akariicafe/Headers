@interface ACUISSizeDimensionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) long long type;

+ (id)new;
+ (id)fixed:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithMinimum:(double)a0 maximum:(double)a1;
- (id)_sizeDimensionRequest;
- (id)initWithDimensionRequest:(id)a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1 type:(long long)a2;
- (long long)objcTypeFromSwift:(long long)a0;
- (long long)swiftTypeFromObjc:(long long)a0;

@end
