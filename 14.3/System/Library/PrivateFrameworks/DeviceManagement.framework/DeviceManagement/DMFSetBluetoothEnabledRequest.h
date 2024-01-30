@interface DMFSetBluetoothEnabledRequest : DMFTaskRequest

@property (nonatomic) BOOL enabled;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
