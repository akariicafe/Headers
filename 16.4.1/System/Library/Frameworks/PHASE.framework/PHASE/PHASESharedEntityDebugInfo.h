@interface PHASESharedEntityDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) int referenceCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setReferenceCount:(int)a0;

@end
