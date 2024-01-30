@interface CSCoreSpeechServices : NSObject

+ (id)getCoreSpeechXPCConnection;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
+ (void)voiceTriggerJarvisLanguageList:(id)a0 jarvisSelectedLanguage:(id)a1 completion:(id /* block */)a2;
+ (id)getCoreSpeechServiceConnection;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 downloadedModels:(id)a2 preinstalledModels:(id)a3 completion:(id /* block */)a4;
+ (void)requestUpdatedSATAudio;
+ (long long)getFirstPassRunningMode;

@end
