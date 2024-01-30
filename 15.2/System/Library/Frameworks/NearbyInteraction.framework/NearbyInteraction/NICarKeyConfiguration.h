@class NSString, NSDictionary;

@interface NICarKeyConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *vehicleIdentifier;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;
+ (id)_vehicleSimConfigurationWithOptions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initVehicleSimConfiguration:(id)a0;
- (id)initWithVehicleIdentifier:(id)a0;

@end
