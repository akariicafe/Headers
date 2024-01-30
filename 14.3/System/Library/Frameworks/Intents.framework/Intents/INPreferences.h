@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (long long)siriAuthorizationStatus;
+ (id)siriLanguageCode;

- (id)init;
- (void).cxx_destruct;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)_init;
- (void)assertThisProcessHasSiriEntitlement;
- (void)_updateWithExtensionContext:(id)a0;
- (BOOL)_weAreRunningAsAnExtension;
- (long long)_siriAuthorizationStatus;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (id)_siriLanguageCode;

@end
