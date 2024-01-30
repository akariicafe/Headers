@class NSDictionary, NSURL, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *configuration;
@property (readonly, weak) NSNumber *version;
@property (copy) NSURL *configurationURL;

- (id)paymentSetupBrowsableProductTypesForRegion:(id)a0;
- (id)defaultServerURL;
- (id)_queue_globalFeaturesForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)contactFormatConfiguration;
- (id)_regionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2 supportedRegions:(BOOL)a3;
- (id)init;
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)a0;
- (void).cxx_destruct;
- (id)maxRefreshIntervalForRegion:(id)a0;
- (BOOL)buddyProvisioningEnabledForRegion:(id)a0;
- (id)_queue_region:(id)a0;
- (double)deviceCheckInIntervalForRegion:(id)a0;
- (id)paymentServicesMerchantURLForRegion:(id)a0;
- (id)_queue_unsupported_regions;
- (BOOL)manualProvisioningEnabledForRegion:(id)a0;
- (BOOL)buddyManualProvisioningEnabledForRegion:(id)a0;
- (BOOL)applyServiceEnabledForRegion:(id)a0;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)a0;
- (id)betaPaymentNetworkVersionsForRegion:(id)a0;
- (id)featuresForRegion:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)a0;
- (BOOL)accountServiceEnabledForRegion:(id)a0;
- (id)discoveryManifestURLForRegion:(id)a0;
- (double)provisioningEnablementPercentageForRegion:(id)a0;
- (BOOL)peerPaymentEnabledForRegion:(id)a0;
- (BOOL)suppressCardholderNameFieldForRegion:(id)a0;
- (BOOL)hasFeatureRequiringRegistrationInRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (BOOL)shouldEnableTransitServiceCheckInForRegion:(id)a0;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)browseProvisioningBankAppsManualEntryDisabledForRegion:(id)a0;
- (id)_queue_featuresForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)brokerURLForRegion:(id)a0;
- (BOOL)browseProvisioningBankAppsEnabledForRegion:(id)a0;
- (id)featureWithType:(long long)a0 inRegion:(id)a1;
- (id)heroImageManifestURLForRegion:(id)a0;
- (id)maxRefreshIntervalForUnsupportedRegion;
- (BOOL)cameraFirstProvisioningEnabledForRegion:(id)a0;
- (id)_featuresFromDictionary:(id)a0 withRegion:(id)a1 osVersion:(id)a2 deviceClass:(id)a3;
- (id)paymentServicesURLForRegion:(id)a0;
- (id)primaryFeaturedNetworkForRegion:(id)a0;
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)a0;
- (BOOL)_queue_supportedForOSVersion:(id)a0 inRegion:(id)a1 deviceClass:(id)a2 platform:(id)a3 suportedRegions:(BOOL)a4;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)_queue_regions;
- (BOOL)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)a0;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)initWithConfiguration:(id)a0 url:(id)a1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)a0;
- (BOOL)regionHasProvisioningEnablementPercentage:(id)a0;
- (id)_queue_featuresForRegion:(id)a0;
- (BOOL)deviceCheckInDisabledForRegion:(id)a0;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (BOOL)hasFeaturesSupportedForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)applyServiceFeaturesForRegion:(id)a0;
- (id)unsupportedWebPaymentConfigurations;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)a0;
- (id)marketsURL;
- (id)_queue_unsupported_region:(id)a0;
- (BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)remotePaymentsRequiredForVoiceover;

@end
