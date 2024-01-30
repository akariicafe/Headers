@class NSObject, _LTLoggingRequestHandler, _LTTextToSpeechCache, _LTServerSpeakSession, _LTServerSpeechSession;
@protocol _LTTranslationEngine, OS_dispatch_queue;

@interface _LTTranslationServer : NSObject {
    id<_LTTranslationEngine> _offlineCachedEngine;
    id<_LTTranslationEngine> _onlineCachedEngine;
    _LTTextToSpeechCache *_ttsCache;
    _LTServerSpeechSession *_speechSession;
    _LTServerSpeakSession *_speakSession;
    _LTLoggingRequestHandler *_logger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)clearCaches;
- (id)_offlineEngineForContext:(id)a0 error:(id *)a1;
- (id)_onlineEngineForContext:(id)a0 error:(id *)a1;
- (id)_engineForContext:(id)a0 error:(id *)a1;
- (void)cancelExistingSessions;
- (void)_speechSessionCompleted;
- (void)startLoggingRequest:(id)a0;
- (void)cancelSpeechSession;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)cancelSpeechSessionWithID:(id)a0;
- (void)cleanupOfflineEngine;
- (void)startInstallRequest:(id)a0 delegate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)cleanup;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)installedLocales:(id /* block */)a0;
- (void)endAudio;
- (void)notifyOfMemoryPressure;
- (void)addSpeechAudioData:(id)a0;
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

@end
