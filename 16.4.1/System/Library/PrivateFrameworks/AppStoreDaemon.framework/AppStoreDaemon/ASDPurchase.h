@class NSString, NSDictionary, NSArray, NSNumber;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_buyParameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL installUniversalVariant;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) BOOL isCompatibilityUpdate;
@property (nonatomic) BOOL isRefresh;
@property (copy, nonatomic) NSNumber *ownerDSID;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (nonatomic) BOOL sendGUID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSString *bagKey;
@property (nonatomic) BOOL createsJobs;
@property (nonatomic) BOOL displaysOnLockScreen;
@property long long extensionsToEnable;
@property (nonatomic) BOOL forceWatchInstall;
@property (copy, nonatomic) NSArray *gratisIdentifiers;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) BOOL iOSBinaryMacOSCompatible;
@property (nonatomic) BOOL isDSIDLess;
@property (nonatomic) BOOL isUpdate;
@property (nonatomic) BOOL isBackgroundUpdate;
@property (copy, nonatomic) NSString *referrerName;
@property (copy, nonatomic) NSString *referrerURL;
@property (nonatomic) BOOL isRedownload;
@property (nonatomic) long long softwarePlatform;
@property long long purchaseID;
@property (copy, nonatomic) NSArray *requiredCapabilities;
@property (nonatomic) BOOL shouldCancelForInstalledBundleItems;
@property (copy) NSString *preflightURLString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)appendValue:(id)a0 forBuyParameter:(id)a1;
- (id)firstValueForBuyParameter:(id)a0;

@end
