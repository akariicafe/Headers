@class NSMutableDictionary, PSSimStatusCache, NSString, CoreTelephonyClient;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) PSSimStatusCache *simCache;
@property (retain) NSMutableDictionary *carrierNameDict;
@property (retain) NSMutableDictionary *carrierBundleVersionDict;
@property (retain) NSMutableDictionary *volteCustomerCarePhoneNumberDict;
@property (retain) NSMutableDictionary *volteCustomerCareWebsiteDict;
@property (retain) NSMutableDictionary *showVolteWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *showVoNRWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *show5GWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *is5GSAEnabledByDefaultDict;
@property (retain) NSMutableDictionary *carrierServicesDict;
@property (retain) NSMutableDictionary *showServiceCodes;
@property (retain) NSMutableDictionary *carrierServicesAccountUrlDict;
@property (retain) NSMutableDictionary *carrierServicesWebViewAccountUrlDict;
@property (retain) NSMutableDictionary *carrierMmsInfoUrlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void)carrierBundleChange:(id)a0;
- (id)getLogger;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (void)_clearCache;
- (id)activeDataCarrierName;
- (id)carrierBundleVersion:(id)a0;
- (id)carrierName:(id)a0;
- (id)carrierServices:(id)a0;
- (id)carrierServicesAccountUrl:(id)a0;
- (id)carrierServicesMyAccountUrlTitle:(id)a0;
- (id)carrierServicesWebViewAccountUrl:(id)a0;
- (id)fetchCarrierBundleValue:(id)a0;
- (id)fetchCarrierBundleValue:(id)a0 context:(id)a1;
- (id)fetchCarrierBundleValueAsString:(id)a0;
- (id)fetchCarrierBundleValueForActiveDataPlan:(id)a0;
- (id)fetchCarrierBundleValueForDefaultVoicePlan:(id)a0;
- (void)fetchCarrierBundleVersion;
- (void)fetchCarrierMmsInfoUrl;
- (void)fetchCarrierName;
- (void)fetchCarrierServices;
- (void)fetchCarrierServicesAccountUrl;
- (void)fetchCarrierServicesWebViewAccountUrl;
- (void)fetchIs5GSAEnabledByDefault;
- (void)fetchShow5GWarningUnsupportedCarrier;
- (void)fetchShowServiceCodes;
- (void)fetchShowVoNRWarningUnsupportedCarrier;
- (void)fetchShowVolteWarningUnsupportedCarrier;
- (void)fetchVolteCustomerCarePhoneNumber;
- (void)fetchVolteCustomerCareWebsite;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (BOOL)is5GSAEnabledByDefault:(id)a0;
- (id)mmsInfoTitle:(id)a0;
- (id)mmsInfoUrl:(id)a0;
- (BOOL)show5GWarningUnsupportedCarrier:(id)a0;
- (BOOL)showServiceCodes:(id)a0;
- (BOOL)showVoNRWarningUnsupportedCarrier:(id)a0;
- (BOOL)showVolteWarningUnsupportedCarrier:(id)a0;
- (id)volteCustomerCarePhoneNumber:(id)a0;
- (id)volteCustomerCareWebsite:(id)a0;

@end
