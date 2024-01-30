@class NSArray, NSDictionary, NSData, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSData *clientAuditTokenData;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) BOOL establishesActiveAccount;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (nonatomic) BOOL ignoresPreviousClaimAttempts;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (nonatomic) BOOL suppressErrorDialogs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClaimStyle:(long long)a0;

@end
