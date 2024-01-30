@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSData *pushToken;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)destination;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)privateDescription;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isGlobal;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;

@end
