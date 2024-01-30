@class NSString, NSMutableDictionary, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *carrierNameDict;
@property (retain) NSMutableDictionary *carrierBundleVersionDict;
@property (retain) NSMutableDictionary *volteCustomerCarePhoneNumberDict;
@property (retain) NSMutableDictionary *volteCustomerCareWebsiteDict;
@property (retain) NSMutableDictionary *showVolteWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *show5GWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *carrierServicesDict;
@property (retain) NSMutableDictionary *showServiceCodes;
@property (retain) NSMutableDictionary *carrierServicesAccountUrlDict;
@property (retain) NSMutableDictionary *carrierMmsInfoUrlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)carrierBundleChange:(id)a0;
- (void)willEnterForeground;
- (void)_clearCache;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (id)fetchCarrierBundleValue:(id)a0 context:(id)a1;
- (id)carrierServicesAccountUrl:(id)a0;
- (id)carrierServicesAccountTitle:(id)a0;
- (id)mmsInfoUrl:(id)a0;
- (id)mmsInfoTitle:(id)a0;
- (id)carrierServices:(id)a0;
- (BOOL)showServiceCodes:(id)a0;
- (id)activeDataCarrierName;
- (id)fetchCarrierBundleValueForDefaultVoicePlan:(id)a0;
- (id)fetchCarrierBundleValueForActiveDataPlan:(id)a0;
- (id)carrierName:(id)a0;
- (BOOL)show5GWarningUnsupportedCarrier:(id)a0;
- (id)fetchCarrierBundleValueAsString:(id)a0;
- (void)fetchCarrierName;
- (void)fetchCarrierBundleVersion;
- (void)fetchVolteCustomerCarePhoneNumber;
- (void)fetchVolteCustomerCareWebsite;
- (id)fetchCarrierBundleValue:(id)a0;
- (void)fetchShowVolteWarningUnsupportedCarrier;
- (void)fetchShow5GWarningUnsupportedCarrier;
- (void)fetchCarrierServices;
- (void)fetchShowServiceCodes;
- (void)fetchCarrierServicesAccountUrl;
- (void)fetchCarrierMmsInfoUrl;
- (id)carrierBundleVersion:(id)a0;
- (id)volteCustomerCarePhoneNumber:(id)a0;
- (id)volteCustomerCareWebsite:(id)a0;
- (BOOL)showVolteWarningUnsupportedCarrier:(id)a0;

@end
