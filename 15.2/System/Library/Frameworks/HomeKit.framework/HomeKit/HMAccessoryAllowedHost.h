@class NSString, NSSet;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSSet *addresses;
@property (readonly, nonatomic, getter=isUnrestricted) BOOL unrestricted;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
