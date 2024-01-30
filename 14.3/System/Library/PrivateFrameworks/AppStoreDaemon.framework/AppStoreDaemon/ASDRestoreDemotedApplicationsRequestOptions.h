@class NSNumber, NSString, NSArray;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSNumber *accountID;
@property (readonly, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSArray *bundleIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountID:(id)a0 appleID:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIDs:(id)a0;

@end
