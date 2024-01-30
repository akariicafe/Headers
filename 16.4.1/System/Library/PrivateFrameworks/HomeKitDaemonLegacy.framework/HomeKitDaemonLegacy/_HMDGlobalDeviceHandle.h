@class NSData, HMDAccountHandle;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)destination;
- (void)encodeWithCoder:(id)a0;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPushToken:(id)a0 accountHandle:(id)a1;
- (BOOL)isGlobal;

@end
