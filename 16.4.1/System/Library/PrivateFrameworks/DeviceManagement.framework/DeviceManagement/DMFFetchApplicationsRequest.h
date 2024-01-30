@class NSArray;

@interface DMFFetchApplicationsRequest : DMFTaskRequest

@property (nonatomic) BOOL excludeIcon;
@property (nonatomic) BOOL excludeUnmanagedApps;
@property (nonatomic) BOOL deleteFeedback;
@property (nonatomic) unsigned long long typeFilter;
@property (nonatomic) unsigned long long stateFilter;
@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
