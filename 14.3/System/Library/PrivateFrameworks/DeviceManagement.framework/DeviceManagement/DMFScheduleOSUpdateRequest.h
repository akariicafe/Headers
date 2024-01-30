@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *productKey;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)_descriptionForAction:(unsigned long long)a0;
+ (BOOL)_action:(unsigned long long *)a0 fromString:(id)a1;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
