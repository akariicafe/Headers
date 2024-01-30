@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (id)siriLanguageCode;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (long long)siriAuthorizationStatus;

- (long long)_siriAuthorizationStatus;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)_init;
- (void)assertThisProcessHasSiriEntitlement;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_updateWithExtensionContext:(id)a0;
- (id)init;
- (id)_siriLanguageCode;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
