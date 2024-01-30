@class CoreTelephonyClient, NSString;

@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate>

@property (class, readonly, nonatomic) TUDialAssist *sharedInstance;

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, nonatomic) int dialAssistUserSettingsChangedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)carrierBundleChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)operatorBundleChange:(id)a0;

@end
