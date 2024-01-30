@class NSSet, NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest

@property (class, readonly, nonatomic) NSSet *currentDevicePropertyKeys;

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
