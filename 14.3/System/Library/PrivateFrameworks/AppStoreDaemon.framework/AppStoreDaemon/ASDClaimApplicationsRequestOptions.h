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

- (id)initWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClaimStyle:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
