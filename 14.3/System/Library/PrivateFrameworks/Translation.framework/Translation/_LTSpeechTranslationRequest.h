@class NSObject, NSArray, NSString, NSURL, AVAudioConverter, NSMutableArray;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;

@interface _LTSpeechTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    AVAudioConverter *_converter;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> _service;
    id /* block */ _done;
}

@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (retain, nonatomic) NSURL *_lidModelURL;
@property (retain, nonatomic) NSArray *_offlineASRModelURLs;
@property (nonatomic) long long _asrConfidenceThreshold;
@property (nonatomic) long long _lidThreshold;
@property (nonatomic) BOOL autoEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)requestContext;
- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0;
- (id)loggingType;
- (void)_translationFailedWithError:(id)a0;
- (void)_appendAudioPCMBuffer:(id)a0;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 simulateRealtime:(BOOL)a1;
- (id)nativeAudioFormat;
- (void)_convertAndFeedPCMBuffer:(id)a0;
- (void)_drainAndClearAudioConverter;
- (void)_simulateRealtimeBehavior:(id)a0;
- (void)appendAudioPCMBuffer:(id)a0;
- (void)append:(struct opaqueCMSampleBuffer { } *)a0 simulateRealtime:(BOOL)a1;
- (void)speechRecognitionResult:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (void)languageDetectionResult:(id)a0;
- (void)languageDetectionCompleted;
- (void)hybridEndpointerFoundEndpoint;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)endAudio;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;

@end
