@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) NSUUID *deviceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (BOOL)isLocal;
- (id)destination;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)privateDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
