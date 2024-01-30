@class NSExtension, NSString, NSArray, NSURL, NSSet, NSMutableDictionary, NSDictionary, PKPaymentSetupProductImageAssets, PKPaymentSetupProductConfiguration, PKPaymentSetupProductImageAssetURLs;

@interface PKPaymentSetupProduct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSArray *supportedProtocols;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSArray *associatedStoreIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) NSDictionary *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods;
@property (nonatomic) BOOL isServerDriven;
@property (copy, nonatomic) PKPaymentSetupProductConfiguration *configuration;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayStatus;
@property (copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic) long long minimumSupportedAge;
@property (nonatomic) long long maximumSupportedAge;
@property (nonatomic) long long minimumTargetUserSupportedAge;
@property (nonatomic) BOOL meetsAgeRequirements;
@property (copy, nonatomic) NSSet *regions;
@property (retain, nonatomic) PKPaymentSetupProductImageAssets *imageAssets;
@property (copy, nonatomic) NSDictionary *clientInfo;
@property (copy, nonatomic) NSArray *searchTerms;
@property (retain, nonatomic) NSArray *featureApplications;
@property (copy, nonatomic) NSArray *accounts;
@property (nonatomic) BOOL preventsFeatureApplication;
@property (retain, nonatomic) NSArray *onboardingItems;
@property (nonatomic) unsigned long long provisioningStatus;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *longLocalizedDescription;
@property (readonly, nonatomic) NSString *primaryRegion;
@property (nonatomic) long long supportedProvisioningMethods;
@property (readonly, copy, nonatomic) NSDictionary *readerModeMetadata;
@property (readonly, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (readonly, nonatomic) BOOL suppressPendingPurchases;
@property (readonly, copy, nonatomic) NSArray *supportedCameraCaptureTypes;
@property (readonly, copy, nonatomic) NSArray *supportedInAppTypes;
@property (readonly, copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers;
@property (readonly, nonatomic) NSExtension *provisioningExtension;
@property (readonly, nonatomic) BOOL provisioningExtensionRequiresAuthorization;
@property (readonly, copy, nonatomic) NSString *regionIdentifier;
@property (readonly, copy, nonatomic) NSArray *paymentOptions;
@property (readonly, copy, nonatomic) PKPaymentSetupProduct *augmentedProduct;

+ (id)productForIssuerProvisioningExtension:(id)a0 withStatus:(id)a1;
+ (id)_displayNameForCardType:(id)a0;
+ (id)_inAppProvisioningURLWthScheme:(id)a0 path:(id)a1;
+ (id)productsFromBrowseableBankApps:(id)a0;

- (id)productIdentifier;
- (id)initWithFeatureIdentifier:(unsigned long long)a0;
- (void)updateWithProductDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)provisioningMethodTypes;
- (void)setProvisioningMethodMetadata:(id)a0 forType:(id)a1;
- (long long)allSupportedProtocols;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsOSVersion:(id)a0 deviceClass:(id)a1;
- (BOOL)supportsDevice:(id)a0;
- (void)augmentWithProduct:(id)a0;
- (void)_updateDebugConfigurationForState:(unsigned long long)a0;
- (void)didAuthorizeProvisioningExtension;
- (id)provisioningMethodMetadataForType:(id)a0;
- (id)partnerIdentifier;

@end
