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
- (BOOL)isWirelessCarPlayEnabled;
- (void)handleAssistantPreferencesChanged:(id)a0;
- (void)_updateCarPlayAllowed;
- (void)handleAssistantLanguageChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCarPlayCapable;
- (void)dealloc;
- (BOOL)isCarPlayAllowed;
- (BOOL)_isCarPlayAllowed;

@end
