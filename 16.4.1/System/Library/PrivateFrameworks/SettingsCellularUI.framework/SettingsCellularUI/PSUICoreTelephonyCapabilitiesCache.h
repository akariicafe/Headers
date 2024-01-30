@class CTCapability, PSSimStatusCache, NSString, CoreTelephonyClient;

@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain) CTCapability *volteCapability;
@property (retain) CTCapability *vonrCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void)clearCache;
- (id)getLogger;
- (id)initPrivate;
- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)fetchCanSetCapabilityWithCache:(id)a0;
- (BOOL)canSetCapabilityForContext:(id)a0 cache:(id)a1;
- (BOOL)canSetCapabilityVoLTE:(id)a0;
- (BOOL)canSetCapabilityVoNR:(id)a0;
- (BOOL)cannotChangeVoLTESettingCallCarrier:(id)a0;
- (BOOL)capabilityEnabledForContext:(id)a0 cache:(id)a1;
- (BOOL)capabilityEnabledVoLTE:(id)a0;
- (BOOL)capabilityEnabledVoNR:(id)a0;
- (void)fetchCapabilityEnabledWithCache:(id)a0;
- (BOOL)fetchDeviceAndPlan5GSupport:(id)a0;
- (BOOL)getCapabilityInfo:(id)a0 forContext:(id)a1 cache:(id)a2;
- (BOOL)isVoLTEStillProvisioningForContext:(id)a0;
- (void)setCapabilityEnabledForContext:(id)a0 cache:(id)a1 enabled:(BOOL)a2;
- (void)setCapabilityVoLTE:(id)a0 enabled:(BOOL)a1;
- (void)setCapabilityVoNR:(id)a0 enabled:(BOOL)a1;

@end
