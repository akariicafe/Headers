@class NSString, NSURL, UIImage, NSNumber;

@interface VSAppDescription : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *shortenedDisplayName;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sellerName;
@property (copy, nonatomic) NSString *externalVersionID;
@property (copy, nonatomic) NSURL *appStoreURL;
@property (copy, nonatomic) NSURL *privacyPolicyEndpointURL;
@property (copy, nonatomic) NSURL *licenseAgreementEndpointURL;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSNumber *contentRank;
@property (nonatomic) BOOL offersInAppPurchases;
@property (copy, nonatomic) NSString *artworkURLTemplate;
@property (retain, nonatomic) UIImage *icon;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)iconURLForSize:(struct CGSize { double x0; double x1; })a0;

@end
