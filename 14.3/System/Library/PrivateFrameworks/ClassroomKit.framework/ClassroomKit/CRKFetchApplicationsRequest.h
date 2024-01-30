@class NSArray;

@interface CRKFetchApplicationsRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
