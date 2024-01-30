@class NSString;
@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>

@property (nonatomic) BOOL cachedCarPlayAllowed;
@property (weak, nonatomic) id<CRCarPlayPreferencesDelegate> preferencesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (void)handleAssistantPreferencesChanged:(id)a0;
- (BOOL)isCarPlayAllowed;
- (void)handleAssistantLanguageChanged:(id)a0;
- (void)_updateCarPlayAllowed;
- (BOOL)isWirelessCarPlayEnabled;
- (BOOL)_isCarPlayAllowed;
- (BOOL)isCarPlayCapable;

@end
