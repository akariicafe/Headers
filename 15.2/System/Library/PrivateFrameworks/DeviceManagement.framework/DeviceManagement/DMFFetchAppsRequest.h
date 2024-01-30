@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) BOOL deleteFeedback;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;
@property (nonatomic) BOOL managedAppsOnly;
@property (nonatomic) BOOL advanceTransientStates;
@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
