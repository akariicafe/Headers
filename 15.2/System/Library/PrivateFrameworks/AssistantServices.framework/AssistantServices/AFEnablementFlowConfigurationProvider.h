@class AFSettingsConnection;

@interface AFEnablementFlowConfigurationProvider : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;

+ (id)_createConfigurationForParameters:(id)a0;
+ (BOOL)_shouldAllowRandomVoiceSelectionForEnablementFlow:(long long)a0;
+ (void)_emitEnablementFlowLoggingForConfigurationParameters:(id)a0 didEnable:(BOOL)a1;

- (void).cxx_destruct;
- (id)init;
- (id)_storedVoiceInfo;
- (void)_resolveIfNewUserWithParameters:(id)a0 forRecognitionLanguages:(id)a1 completion:(id /* block */)a2;
- (void)_resolveVoiceSelection:(id)a0 forRecognitionLanguages:(id)a1 completion:(id /* block */)a2;
- (id)_storedRecognitionLanguageCode;
- (void)configurationForEnablementFlow:(long long)a0 recognitionLanguageCodes:(id)a1 completion:(id /* block */)a2;

@end
