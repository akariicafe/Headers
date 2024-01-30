@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (BOOL)isLocal;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)destination;
- (id)description;
- (id)initWithDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
