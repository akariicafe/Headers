@class NSString, PSUIAppInstallController, CoreTelephonyClient, CTCarrierSpaceAppsInfo, CTCarrierSpaceUserConsentFlowInfo, CTCarrierSpaceCapabilities, NSObject, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, NSNumber;
@protocol OS_dispatch_queue;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    struct __CTServerConnection { } *_serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (long long)bytesFromString:(id)a0 carrierSpaceUnits:(long long)a1;
+ (int)carrierMetricTypeForString:(id)a0;
+ (BOOL)isCarrierMetricTypeValid:(int)a0;
+ (id)getNSURLSessionConfiguration;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)capabilities;
- (void)usageDidChange;
- (void)plansDidChange;
- (void)appsDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)capabilitiesDidChange:(id)a0;
- (void)refresh;
- (void)dealloc;
- (void)userConsentFlowInfoDidChange;
- (void)reset;
- (void)setUserConsent:(BOOL)a0;
- (id)usageInfo;
- (id)descriptionForPlanMetrics:(id)a0;
- (id)appsInfo;
- (BOOL)hasUserConsent;
- (id)plansInfo;
- (BOOL)planChangeIsRestricted;
- (id)subscribedPlanOptions;
- (id)subscribedDomesticPlanOptions;
- (id)planMetrics;
- (id)userConsentFlowInfo;
- (void)userConsentAcknowledged:(BOOL)a0;
- (void)refreshAndReload;
- (BOOL)supportsSweetgum;
- (id)localizedDataStringFromBytes:(unsigned long long)a0;
- (id)carrierAppInstallController;

@end
