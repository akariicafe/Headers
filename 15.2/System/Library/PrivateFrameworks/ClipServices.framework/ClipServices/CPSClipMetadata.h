@class CPSClipInvocationPolicy, NSString, NSArray, NSURL, NSDate, NSNumber, NSDictionary;

@interface CPSClipMetadata : NSObject <NSSecureCoding> {
    NSString *_storeClipName;
    NSString *_storeClipCaption;
    NSURL *_storeClipHeroImageURL;
    NSString *_abrClipName;
    NSString *_abrClipCaption;
    NSURL *_abrClipHeroImageURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedTitleForClipSuggestion;
@property (readonly, copy, nonatomic) NSString *localizedSubtitleForClipSuggestion;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *clipBundleID;
@property (nonatomic) BOOL clipIncompatibleWithCurrentDevice;
@property (readonly, nonatomic) BOOL hasFullAppInstalledOnSystem;
@property (copy, nonatomic) NSURL *clipIpaURL;
@property (retain, nonatomic) NSURL *clipURL;
@property (retain, nonatomic) NSURL *clipRequestURL;
@property (copy, nonatomic) NSString *fullAppName;
@property (copy, nonatomic) NSString *fullAppShortName;
@property (copy, nonatomic) NSString *fullAppCaption;
@property (copy, nonatomic) NSString *fullAppContentRating;
@property (copy, nonatomic) NSString *fullAppBundleID;
@property (copy, nonatomic) NSURL *fullAppStoreURL;
@property (copy, nonatomic) NSURL *fullAppIconURL;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *webClipID;
@property (retain, nonatomic) NSString *clipURLHash;
@property (retain, nonatomic) NSArray *test_clipVerifiedAssociatedDomains;
@property (readonly, nonatomic) BOOL isDeveloperOverride;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic) BOOL fullAppOnly;
@property (copy, nonatomic) NSDictionary *amsDictionary;
@property (nonatomic) unsigned long long clipVersionIdentifier;
@property (readonly, nonatomic) NSURL *clipLaunchURL;
@property (retain, nonatomic) CPSClipInvocationPolicy *invocationPolicy;
@property (nonatomic) BOOL deviceCapabilitiesDontMatch;
@property (readonly, nonatomic) NSString *clipName;
@property (readonly, nonatomic) NSString *clipCaption;
@property (readonly, nonatomic) long long clipAction;
@property (readonly, nonatomic) NSString *clipMinimumOSVersion;
@property (readonly, nonatomic) NSURL *clipHeroImageURL;
@property (readonly, nonatomic) NSString *clipOpenButtonTitle;
@property (readonly, nonatomic) NSURL *clipTargetURL;
@property (readonly, nonatomic) NSURL *clipBusinessIconURL;
@property (readonly, nonatomic) NSDictionary *clipBusinessIconStyleAttributes;
@property (readonly, nonatomic) NSNumber *clipMapItemMUID;
@property (readonly, nonatomic) BOOL clipRequestsNotificationPermission;
@property (readonly, nonatomic) BOOL clipRequestsLocationConfirmationPermission;
@property (readonly, nonatomic) NSArray *clipVerifiedAssociatedDomains;
@property (readonly, nonatomic) BOOL hasBusinessItemMetadata;
@property (readonly, nonatomic) BOOL hasAppMetadata;
@property (readonly, nonatomic, getter=isPoweredByThirdParty) BOOL poweredByThirdParty;
@property (copy, nonatomic) NSString *fullAppCachedIconFilePath;
@property (readonly, nonatomic) NSString *bundleDisplayName;

+ (id)fullAppOnlyClipBundleIDs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBusinessItem:(id)a0;
- (BOOL)hasUpToDateVersionInstalledOnSystemIsPlaceholder:(BOOL *)a0;
- (id)initWithDeveloperOverride:(id)a0 invocationURL:(id)a1;
- (void)_updateWithAMSMetadata:(id)a0;
- (id)initWithDictionary:(id)a0 bundleURL:(id)a1;
- (id)initWithUncheckedDictionary:(id)a0;
- (id)_itemIDFromAppURLString:(id)a0;
- (void)_updateInvocationPolicy:(id)a0;
- (BOOL)hasValidAssociatedDomainsToLaunchAppClip;
- (id)initWithDemoBundleURL:(id)a0;
- (void)updateWithStoreParentAppMetadata:(id)a0;
- (void)updateWithStoreClipMetadata:(id)a0;

@end
