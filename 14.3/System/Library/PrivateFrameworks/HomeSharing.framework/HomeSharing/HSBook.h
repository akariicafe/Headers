@class NSString, NSURL, NSDate;

@interface HSBook : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long purchaseHistoryID;
@property (nonatomic) unsigned long long storeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSDate *datePurchased;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isVPPLicensed) BOOL vppLicensed;
@property (copy, nonatomic) NSString *vppOrganizationID;
@property (copy, nonatomic) NSString *vppOrganizationDisplayName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
