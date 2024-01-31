@interface CNLocalAccountSyncRequest : CNAccountSyncRequest <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long retryCount;
@property BOOL standby;
@property BOOL resetStandby;
@property BOOL clearify;

+ (id)argumentsForRequest:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
