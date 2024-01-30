@class NSSet, NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest

@property (class, readonly, nonatomic) NSSet *currentDevicePropertyKeys;

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)a0;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
