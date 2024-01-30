@class NSArray;

@interface CKDiscoverUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *userIdentityLookupInfos;

- (id)activityCreate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
