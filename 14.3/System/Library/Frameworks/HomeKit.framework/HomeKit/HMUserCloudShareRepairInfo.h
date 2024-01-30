@class NSUUID;

@interface HMUserCloudShareRepairInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long version;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
