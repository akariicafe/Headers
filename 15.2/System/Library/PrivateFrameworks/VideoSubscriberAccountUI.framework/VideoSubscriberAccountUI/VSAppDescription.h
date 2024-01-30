@class NSString, NSArray, NSURL, UIImage, NSNumber;

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
@property (nonatomic, getter=isDefaultAppForProvider) BOOL defaultAppForProvider;
@property (copy, nonatomic) NSArray *deviceFamilies;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)iconURLForSize:(struct CGSize { double x0; double x1; })a0;

@end
