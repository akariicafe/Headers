@class NSString, NSXPCConnection, _LTTranslationServer, NSUUID;
@protocol _LTClientConnectionDelegate;

@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSXPCConnection *_connection;
    _LTTranslationServer *_server;
    NSString *_clientIdentifier;
    NSUUID *_speechSessionID;
}

@property (weak, nonatomic) id<_LTClientConnectionDelegate> delegate;

- (void)clearCaches;
- (void).cxx_destruct;
- (void)translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)provideFeedback:(id)a0 withContext:(id)a1;
- (void)startInstallRequest:(id)a0;
- (void)cleanupOnDisconnect;
- (void)logRequestOfType:(id)a0 context:(id)a1;
- (id)_clientDelegate;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)cleanup;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)installedLocales:(id /* block */)a0;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)endAudio;
- (id)initWithConnection:(id)a0 server:(id)a1;
- (void)addSpeechAudioData:(id)a0;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_purgeAllAssets:(id /* block */)a0;
- (void)_updateAllAssets:(id /* block */)a0;
- (void)_getAssetSize:(id /* block */)a0;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)logWithRequestData:(id)a0;

@end
