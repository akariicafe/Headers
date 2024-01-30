@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) BOOL includeTemporary;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
