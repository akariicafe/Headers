@class Logger, CTCapability, PSSimStatusCache, NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain) CTCapability *volteCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)clearCache;
- (void)willEnterForeground;
- (id)getLogger;
- (id)initPrivate;
- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchCanSetCapabilityWithCache:(id)a0;
- (void)fetchCapabilityEnabledWithCache:(id)a0;
- (BOOL)canSetCapabilityForContext:(id)a0 cache:(id)a1;
- (BOOL)getCapabilityInfo:(id)a0 forContext:(id)a1 cache:(id)a2;
- (BOOL)capabilityEnabledForContext:(id)a0 cache:(id)a1;
- (void)setCapabilityEnabledForContext:(id)a0 cache:(id)a1 enabled:(BOOL)a2;
- (BOOL)canSetCapabilityVoLTE:(id)a0;
- (BOOL)cannotChangeVoLTESettingCallCarrier:(id)a0;
- (BOOL)isVoLTEStillProvisioningForContext:(id)a0;
- (BOOL)capabilityEnabledVoLTE:(id)a0;
- (void)setCapabilityVoLTE:(id)a0 enabled:(BOOL)a1;
- (BOOL)fetchDeviceAndPlan5GSupport:(id)a0;

@end
