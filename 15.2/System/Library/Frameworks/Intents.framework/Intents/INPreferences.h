@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)siriLanguageCode;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (long long)siriAuthorizationStatus;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)init;
- (void)assertThisProcessHasSiriEntitlement;
- (void)_updateWithExtensionContext:(id)a0;
- (BOOL)_weAreRunningAsAnExtension;
- (long long)_siriAuthorizationStatus;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (id)_siriLanguageCode;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (id)_init;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;

@end
