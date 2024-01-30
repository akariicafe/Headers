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

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
