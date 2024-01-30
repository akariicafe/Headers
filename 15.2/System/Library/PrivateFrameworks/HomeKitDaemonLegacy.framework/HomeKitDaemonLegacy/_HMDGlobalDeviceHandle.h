@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)destination;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isGlobal;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;

@end
