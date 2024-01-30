@interface CSCoreSpeechServices : NSObject

+ (id)getCoreSpeechXPCConnection;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
+ (id)getCoreSpeechServiceConnection;
+ (void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)a0 completion:(id /* block */)a1;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 accessoryRTModelType:(long long)a2 endpointId:(id)a3 downloadedModels:(id)a4 preinstalledModels:(id)a5 completion:(id /* block */)a6;
+ (void)voiceTriggerJarvisLanguageList:(id)a0 jarvisSelectedLanguage:(id)a1 completion:(id /* block */)a2;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 accessoryRTModelType:(long long)a2 downloadedModels:(id)a3 preinstalledModels:(id)a4 completion:(id /* block */)a5;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 downloadedModels:(id)a2 preinstalledModels:(id)a3 completion:(id /* block */)a4;
+ (void)requestUpdatedSATAudio;
+ (long long)getFirstPassRunningMode;

@end
