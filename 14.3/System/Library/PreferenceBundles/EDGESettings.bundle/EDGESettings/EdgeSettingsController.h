@class NSArray, NSDictionary, CTXPCServiceSubscriptionContext, PSSystemConfiguration, CoreTelephonyClient, NSMutableDictionary;

@interface EdgeSettingsController : PSListController {
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

+ (id)makeUIApnBasedOn:(id)a0;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_getAPNDictinaryForService:(int)a0;
- (void)_updateKey:(id)a0 toValue:(id)a1 forServiceType:(int)a2;
- (void)resetAPNsDictionaries;
- (void)loadCurrentAPNs;
- (BOOL)shouldResetAttachAPN;
- (void)resetAttachAPNSettings;
- (id)_getMMSObjectForKey:(id)a0;
- (void)_setMMSOverrideValue:(id)a0 forKey:(id)a1;
- (id)_APNDictionaryForServiceFromSC:(int)a0;
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
