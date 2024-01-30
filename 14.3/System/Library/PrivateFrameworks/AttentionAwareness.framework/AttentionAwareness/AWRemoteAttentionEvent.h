@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long usagePage;
@property (readonly, nonatomic) long long usage;

- (void)validateMask;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 remoteMetadata:(struct AWRemoteMetadata { long long x0; long long x1; } *)a2;
- (void)encodeWithCoder:(id)a0;

@end
