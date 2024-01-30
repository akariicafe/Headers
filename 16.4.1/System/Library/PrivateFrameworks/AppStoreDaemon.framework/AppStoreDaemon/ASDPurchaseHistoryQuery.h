@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long accountID;
@property (copy) NSArray *bundleIDs;
@property long long isFirstParty;
@property long long isHidden;
@property long long isIOSBinaryMacOSCompatible;
@property long long optedInForMacOSEligibility;
@property long long isPreorder;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property (copy) NSArray *storeIDs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
