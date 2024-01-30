@class NSString, NSMutableDictionary, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *volteCapabilityDict;
@property (copy) NSMutableDictionary *volteCapabilityInfoDict;
@property (retain) NSMutableDictionary *volteEnabledDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (void)fetchCanSetCapabilityVoLTE;
- (void)fetchCapabilityEnabledVoLTE;
- (BOOL)canSetCapabilityVoLTE:(id)a0;
- (BOOL)cannotChangeVoLTESettingCallCarrier:(id)a0;
- (BOOL)isVoLTEStillProvisioningForContext:(id)a0;
- (BOOL)capabilityEnabledVoLTE:(id)a0;
- (void)setCapabilityVoLTE:(id)a0 enabled:(BOOL)a1;
- (BOOL)singleSimCanSetCapabilityVoLTE;

@end
