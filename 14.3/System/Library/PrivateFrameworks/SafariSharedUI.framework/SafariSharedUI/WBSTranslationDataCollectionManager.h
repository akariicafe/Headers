@interface WBSTranslationDataCollectionManager : NSObject

+ (id)_currentLanguage;
+ (void)_sendDomainDataToDifferentialPrivacy:(id)a0 withKey:(id)a1;
+ (void)_sendDataToDifferentialPrivacyWithKey:(id)a0 value:(id)a1;
+ (void)_sendNormalizedHighLevelDomainDataToDifferentialPrivacy:(id)a0 withKey:(id)a1;
+ (id)_translationDomainFromURLString:(id)a0;
+ (void)sendUserMayWantTranslationURLDataToDifferentialPrivacyIfNecessary:(id)a0;
+ (void)sendUserPerformedTranslationURLDataToDifferentialPrivacyIfNecessary:(id)a0;

@end
