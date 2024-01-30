@class NSDictionary, OSALogIdentity;

@interface OSALogEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) OSALogIdentity *identity;
@property (readonly, nonatomic) NSDictionary *details;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 details:(id)a1;

@end
