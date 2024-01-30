@class NSSet, NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest

@property (class, readonly, nonatomic) NSSet *currentDevicePropertyKeys;

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
