@class NSURL, _LTTextToSpeechCache, NSDictionary, NSObject, _LTSpeechTranslationAssetInfo, NSLocale, _LTMultilingualSpeechRecognizer, _LTLanguageDetectionResult, NSString, _LTLocalePair, NSArray, _LTOfflineSpeechSynthesizer, EMTTranslator;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _LTOfflineTranslationEngine : NSObject <_LTTranslationEngine> {
    _LTSpeechTranslationAssetInfo *_assetInfo;
    _LTMultilingualSpeechRecognizer *_recognizer;
    _LTOfflineSpeechSynthesizer *_synthesizer;
    NSDictionary *_etiquetteSanitizers;
    EMTTranslator *_translator;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_lidWaitGroup;
    NSLocale *_lidBestResult;
    _LTLanguageDetectionResult *_lidResult;
    BOOL _didEndpointSpeech;
}

@property (retain, nonatomic) _LTLocalePair *localePair;
@property (retain, nonatomic) NSArray *asrModelURLs;
@property (retain, nonatomic) NSURL *mtModelURL;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endpoint;
- (void).cxx_destruct;
- (void)setLanguagesRecognized:(id)a0;
- (BOOL)translatesPair:(id)a0;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)cancelSpeechTranslation;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)endAudio;
- (void)_loadRecognizers;
- (void)_loadTranslatorForTask:(id)a0;
- (void)_loadEtiquetteSanitizers;
- (id)_handleTranslationResults:(id)a0 withContext:(id)a1;
- (void)_translateString:(id)a0 withContext:(id)a1 toLocale:(id)a2 completion:(id /* block */)a3;
- (id)_paragraphResultFromSentences:(id)a0;
- (void)_translateParagraph:(id)a0 withContext:(id)a1 toLocale:(id)a2 completion:(id /* block */)a3;
- (void)cancelRecognition;
- (void)_translate:(id)a0 withContext:(id)a1 toLocale:(id)a2 paragraphResult:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)_getBestRecognitionResult:(id)a0 context:(id)a1;
- (void)_waitForLIDWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0 assetInfo:(id)a1;
- (void)addSpeechAudioData:(id)a0;

@end
