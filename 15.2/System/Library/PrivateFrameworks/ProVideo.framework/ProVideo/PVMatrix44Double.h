@interface PVMatrix44Double : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } SIMDFloat4x4;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } SIMDDouble4x4;

+ (id)matrix;
+ (BOOL)isMatrix:(id)a0 equivalentTo:(id)a1;
+ (id)matrixWithSIMDDouble4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (id)matrixWithSIMDFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (id)matrixWithPCMatrix44Double:(id)a0;
+ (id)matrixWithPCMatrix44d:(const void *)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isIdentity;
- (id)compactDescription;
- (id)description;
- (BOOL)isFinite;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)extendedDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)transpose;
- (void)makeIdentity;
- (id)initWithSIMDFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithSIMDDouble4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithPCMatrix44Double:(id)a0;
- (struct PVTransformInfo { struct { } x0; })getTransformInfo:(id *)a0;
- (double)valueAtCol:(unsigned long long)a0 row:(unsigned long long)a1;
- (void)setValue:(double)a0 col:(unsigned long long)a1 row:(unsigned long long)a2;
- (id)initWithPCMatrix44d:(const void *)a0;
- (void)setPCMatrix44d:(const void *)a0;
- (id)pcMatrix44Double;
- (void)setPCMatrix44Double:(id)a0;
- (void)getPCMatrix44d:(void *)a0;

@end
