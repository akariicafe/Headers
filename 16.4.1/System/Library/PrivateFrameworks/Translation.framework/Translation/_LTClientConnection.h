@class NSString, NSXPCConnection, _LTTranslationServer, NSUUID;
@protocol _LTClientConnectionDelegate;

@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSXPCConnection *_connection;
    _LTTranslationServer *_server;
    BOOL _trusted;
    NSString *_trustedClientIdentifier;
    NSUUID *_speechSessionID;
}

@property (weak, nonatomic) id<_LTClientConnectionDelegate> delegate;

- (void)cleanup;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_deleteHotfix:(id /* block */)a0;
- (void)provideFeedback:(id)a0 withContext:(id)a1;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)clearCaches;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (void)_updateHotfix:(id /* block */)a0;
- (void)logWithRequestData:(id)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)logRequestOfType:(id)a0 context:(id)a1;
- (void)_purgeAllAssets:(id /* block */)a0;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (void)cleanupOnDisconnect;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
- (void)_updateAllAssets:(id /* block */)a0;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
- (id)_clientDelegate;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endAudio;
- (void)_getAssetSize:(id /* block */)a0;
- (void)translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)a0;
- (void)installedLocales:(id /* block */)a0;
- (void)addSpeechAudioData:(id)a0;
- (void).cxx_destruct;
- (void)startInstallRequest:(id)a0;
- (id)initWithConnection:(id)a0 server:(id)a1 trusted:(BOOL)a2;
- (void)onDeviceModeEnabled:(id /* block */)a0;

@end
