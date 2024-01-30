@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidDestination:(id)a0;

- (id)destination;
- (void)encodeWithCoder:(id)a0;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isLocal;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0;

@end
