@class NSString, NSNumber;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *artworkPath;
@property (readonly, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (nonatomic) BOOL deviceBasedVPP;
@property (copy, nonatomic) NSNumber *downloaderID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSNumber *familyID;
@property (nonatomic) BOOL isBeta;
@property (nonatomic) BOOL isClip;
@property (copy, nonatomic) NSNumber *installOrder;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (copy, nonatomic) NSNumber *storeFront;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *shortVersion;

- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
