@class NSUUID, HMDAccessory;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0 identifier:(id)a1 state:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
