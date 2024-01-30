@class NSString;
@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>

@property (nonatomic) BOOL cachedCarPlayAllowed;
@property (weak, nonatomic) id<CRCarPlayPreferencesDelegate> preferencesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)_boolValueInCarPlayDomainForKey:(struct __CFString { } *)a0;
- (BOOL)_isCarPlayAllowed;
- (BOOL)isCarPlayCapable;
- (BOOL)isCarPlayAllowed;
- (void)dealloc;
- (BOOL)isWirelessCarPlayEnabled;
- (void)_updateCarPlayAllowed;
- (id)init;
- (id)isCCCHeadUnitPairingOverrideEnabled;
- (id)shouldAlwaysAcceptCCCHeadUnitPairing;
- (void).cxx_destruct;

@end
