@interface ARExtrinsicsWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } matrix;

- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
