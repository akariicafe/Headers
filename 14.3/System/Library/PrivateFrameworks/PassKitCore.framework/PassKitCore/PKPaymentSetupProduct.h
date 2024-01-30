@class NSExtension, NSString, NSArray, NSURL, NSSet, NSMutableDictionary, NSDictionary, PKPaymentSetupProductImageAssets, PKPaymentSetupProductConfiguration, PKPaymentSetupProductImageAssetURLs;

@interface PKPaymentSetupProduct : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *regions;
@property (copy, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSArray *supportedProtocols;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSArray *associatedStoreIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) NSDictionary *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic) long long minimumSupportedAge;
@property (nonatomic) long long maximumSupportedAge;
@property (nonatomic) BOOL meetsAgeRequirements;
@property (retain, nonatomic) NSArray *featureApplications;
@property (nonatomic) BOOL hasAccount;
@property (retain, nonatomic) NSArray *onboardingItems;
@property (readonly, copy, nonatomic) PKPaymentSetupProductConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (nonatomic) long long supportedProvisioningMethods;
@property (readonly, copy, nonatomic) NSDictionary *readerModeMetadata;
@property (readonly, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (readonly, nonatomic) PKPaymentSetupProductImageAssets *imageAssets;
@property (readonly, nonatomic) BOOL suppressPendingPurchases;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, copy, nonatomic) NSArray *supportedCameraCaptureTypes;
@property (readonly, copy, nonatomic) NSArray *supportedInAppTypes;
@property (readonly, copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers;
@property (readonly, nonatomic) NSExtension *provisioningExtension;
@property (readonly, nonatomic) BOOL provisioningExtensionRequiresAuthorization;
@property (readonly, copy, nonatomic) NSString *regionIdentifier;
@property (readonly, copy, nonatomic) NSArray *paymentOptions;

+ (void)_updateProduct:(id)a0 withDebugConfigurationForState:(unsigned long long)a1;
+ (id)partnerProductsFromArrayOfPartners:(id)a0 andProducts:(id)a1;
+ (id)_displayNameForCardType:(id)a0;
+ (id)_inAppProvisioningURLWthScheme:(id)a0 path:(id)a1;
+ (id)productsFromBrowseableBankApps:(id)a0;
+ (id)productForIssuerProvisioningExtension:(id)a0 withStatus:(id)a1;

- (id)partnerIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureIdentifier:(unsigned long long)a0;
- (id)productIdentifier;
- (id)_initWithDisplayName:(id)a0 partnerDictionary:(id)a1 productIdentifier:(id)a2 paymentOptions:(id)a3 termsURL:(id)a4 provisioningMethods:(id)a5 readerModeMetadata:(id)a6 requiredFields:(id)a7 imageAssets:(id)a8 minimumOSVersion:(id)a9 region:(id)a10 hsa2Requirement:(id)a11 suppressPendingPurchases:(id)a12 supportedTransitNetworkIdentifiers:(id)a13 onboardingItems:(id)a14 actionBaseURL:(id)a15 productState:(id)a16 minimumProductAge:(id)a17 maximumProductAge:(id)a18 associatedStoreIdentifiers:(id)a19 appLaunchURL:(id)a20 regionIdentifier:(id)a21 type:(id)a22 localizedNotificationTitle:(id)a23 localizedNotificationMessage:(id)a24;
- (id)initWithProductDictionary:(id)a0;
- (BOOL)supportsOSVersion:(id)a0 deviceClass:(id)a1;
- (BOOL)supportsDevice:(id)a0;
- (id)provisioningMethodMetadataForType:(id)a0;
- (void)didAuthorizeProvisioningExtension;
- (id)provisioningMethodTypes;
- (void)setProvisioningMethodMetadata:(id)a0 forType:(id)a1;
- (long long)allSupportedProtocols;

@end
