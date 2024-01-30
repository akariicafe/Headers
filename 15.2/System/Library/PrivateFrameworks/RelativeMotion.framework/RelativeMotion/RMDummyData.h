@interface RMDummyData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { union { float data[16]; unsigned long long abstime; } ; } payload;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(struct { union { float x0[16]; unsigned long long x1; } x0; })a0;

@end
