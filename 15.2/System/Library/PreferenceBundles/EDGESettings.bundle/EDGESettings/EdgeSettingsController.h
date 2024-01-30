@class NSMutableDictionary, NSArray, NSString, CTXPCServiceSubscriptionContext, NSDictionary, CoreTelephonyClient, PSSystemConfiguration;

@interface EdgeSettingsController : PSListController <CoreTelephonyClientDeviceManagementDelegate> {
    NSArray *_switchSpecifiers;
    NSArray *_proxyAuthSpecifiers;
    NSArray *_group1Specifiers;
    NSArray *_pacSpecifiers;
    NSArray *_manualSpecifiers;
    NSArray *_advancedSpecifiers;
    NSArray *_InternetContextSpecifiers;
    NSArray *_VVMContextSpecifiers;
    NSArray *_MMSContextSpecifiers;
    NSArray *_IMSContextSpecifiers;
    NSArray *_tetheringContextSpecifiers;
    NSArray *_lteAttachAPNSpecifiers;
    NSArray *_resetSpecifiers;
    BOOL _proxyAuth;
    NSDictionary *_lastProxyDict;
    PSSystemConfiguration *_systemConfig;
    NSMutableDictionary *_lastAttachAPNDict;
    NSMutableDictionary *_newAttachAPNDict;
    BOOL _cacheInitialized;
    NSMutableDictionary *_internetSettingsDictionary;
    NSMutableDictionary *_vvmSettingsDictionary;
    NSMutableDictionary *_mmsSettingsDictionary;
    NSMutableDictionary *_imsSettingsDictionary;
    NSMutableDictionary *_tetheringSettingsDictionary;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSArray *currectSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeUIApnBasedOn:(id)a0;

- (id)specifiers;
- (void)applicationWillSuspend;
- (void)didChangeDeviceManagementSettings:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)applicationDidResume;
- (id)init;
- (void)dealloc;
- (void)setDefaultSettings:(id)a0 specifier:(id)a1;
- (id)getDefaultSettings:(id)a0;
- (id)_getAPNDictinaryForService:(int)a0;
- (void)_updateKey:(id)a0 toValue:(id)a1 forServiceType:(int)a2;
- (void)resetAPNsDictionaries;
- (void)loadCurrentAPNs;
- (BOOL)shouldResetAttachAPN;
- (void)resetAttachAPNSettings;
- (void)resetAllConfiguredSettings;
- (id)_getMMSObjectForKey:(id)a0;
- (void)_setMMSOverrideValue:(id)a0 forKey:(id)a1;
- (id)_APNDictionaryForServiceFromSC:(int)a0;
- (unsigned long long)getGSMASettingsUIControl;
- (BOOL)_shouldShowUIForServiceType:(int)a0;
- (BOOL)isAttachAPNEditingAllowed;
- (BOOL)isTypeOfService:(id)a0 ofServiceType:(int)a1;
- (id)_blankAPNDictionaryWithTypeMask:(int)a0;
- (void)initAPNCacheDictionaries;
- (void)initDictionaryForUIApn:(id *)a0 forServiceType:(int)a1;
- (BOOL)_isAPNDictionaryBlank:(id)a0;
- (void)uploadSettingsOnCT:(id)a0;
- (id)attachAPNSettings;
- (void)commitAttachAPNSettings;
- (void)commitAPNsSettings;
- (void)showCarrierSettingsEraseAlert:(BOOL)a0;
- (id)getAPNDataForSpecifier:(id)a0;
- (void)setAPNData:(id)a0 forSpecifier:(id)a1;
- (void)resetCarrierSettings:(id)a0;
- (id)getMMSValueForSpecifier:(id)a0;
- (void)setMMSValue:(id)a0 forSpecifier:(id)a1;
- (id)getMMSNumericValueForSpecifier:(id)a0;
- (void)setMMSNumericValue:(id)a0 forSpecifier:(id)a1;
- (id)edgeDNS:(id)a0;
- (void)setEdgeDNS:(id)a0 specifier:(id)a1;
- (id)getAttachAPNDataForSpecifier:(id)a0;
- (void)setAttachAPNData:(id)a0 forSpecifier:(id)a1;

@end
