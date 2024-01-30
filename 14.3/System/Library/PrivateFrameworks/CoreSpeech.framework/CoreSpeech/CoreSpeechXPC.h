@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol>

- (id)init;
- (void)installedVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (void)voiceTriggerRTModelForVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 locale:(id)a2 downloadedModels:(id)a3 preinstalledModels:(id)a4 completion:(id /* block */)a5;
- (void)voiceTriggerJarvisLanguageList:(id)a0 jarvisSelectedLanguage:(id)a1 completion:(id /* block */)a2;
- (void)_handleFakeHearstModelRequest:(id)a0 majorVersion:(unsigned long long)a1 minorVersion:(unsigned long long)a2 downloadedModels:(id)a3 preinstalledModels:(id)a4 completion:(id /* block */)a5;
- (id)getAccessoryFallbackLocalTable;
- (id)selectFallbackModelForLocale:(id)a0 downloadedModels:(id)a1 preinstalledModels:(id)a2 rtLocaleMap:(id)a3;
- (id)getAccessoryFallbackFamilyLocal:(id)a0 fromLocaleMap:(id)a1;

@end
