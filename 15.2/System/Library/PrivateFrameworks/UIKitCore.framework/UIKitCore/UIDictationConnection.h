@class NSString, NSMutableDictionary, AFDictationOptions, AFDictationConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

@interface UIDictationConnection : NSObject <AFDictationDelegate>

@property (retain, nonatomic) AFDictationOptions *dictationOptions;
@property (retain, nonatomic) AFDictationConnection *connection;
@property (nonatomic) BOOL offlineOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (copy, nonatomic) NSString *lastUsedPrimaryLanguage;
@property (copy, nonatomic) NSString *lastUsedDetectedLanguage;
@property (retain, nonatomic) NSMutableArray *lastUsedTopLanguages;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection;
@property (nonatomic) unsigned int charBeforeInsertionPointOnDictationStart;
@property (nonatomic) unsigned int charAfterInsertionPointOnDictationStart;
@property (retain, nonatomic) NSMutableDictionary *lastReceivedPartials;
@property (weak, nonatomic) id<UIDictationConnectionDelegate> delegate;
@property (weak, nonatomic) id<UIDictationConnectionTokenFilterProtocol> tokenFilter;
@property (nonatomic) BOOL receivedMultilingualResultsCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cacheSupportedDictationLanguages;
+ (BOOL)isDictationAvailable;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)a0 error:(id *)a1;
+ (BOOL)dictationRestricted;
+ (id)analytics;
+ (void)afDelegate:(id)a0 didReceiveSearchResults:(id)a1 recognizedText:(id)a2 stable:(BOOL)a3 final:(BOOL)a4;
+ (void)_updateFromGlobalOptions:(id)a0;
+ (id)interpretationFromSpeechTokens:(id)a0 startIndex:(unsigned long long)a1 filterBlock:(id /* block */)a2;

- (BOOL)dictationIsAvailableForLanguage:(id)a0;
- (void)sendSpeechCorrection:(id)a0 forIdentifier:(id)a1;
- (void)endSession;
- (void)cancelSpeech;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)a0;
- (void)dictationConnection:(id)a0 didReceiveSearchResults:(id)a1 recognizedText:(id)a2 stable:(BOOL)a3 final:(BOOL)a4;
- (void)dictationConnection:(id)a0 didRecognizePartialResult:(id)a1;
- (void)preheat;
- (void)logDidShowAlternatives:(id)a0 correctionIdentifier:(id)a1 interactionIdentifier:(id)a2;
- (void)logDidSelectAlternative:(id)a0 correctionIdentifier:(id)a1 interactionIdentifier:(id)a2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)a0;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void)beginAvailabilityMonitoring;
- (void)_startWithOptions:(id)a0;
- (void)cancelAvailabilityMonitoring;
- (void)logDidAcceptReplacement:(id)a0 replacementLanguageCode:(id)a1 originalText:(id)a2 correctionIdentifier:(id)a3 interactionIdentifier:(id)a4;
- (void)dictationConnnectionDidChangeAvailability:(id)a0;
- (void)dictationConnection:(id)a0 speechRecordingDidBeginWithOptions:(id)a1;
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)a0;
- (void)dictationConnection:(id)a0 didBeginLocalRecognitionWithModelInfo:(id)a1;
- (void)dictationConnection:(id)a0 languageDetectorFailedWithError:(id)a1;
- (void)restartDictation;
- (id)_initializeWithOptions:(id)a0;
- (void)startForFileAtURL:(id)a0 forLanguage:(id)a1;
- (float)averagePower;
- (id)_speechOptions:(id)a0;
- (void)start;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void).cxx_destruct;
- (id)_createConnectionOptions;
- (void)stopSpeech:(id)a0 activationType:(unsigned long long)a1 result:(id)a2 suppressAlert:(BOOL)a3;
- (void)logDidAcceptDictationResult:(id)a0 reason:(id)a1 result:(id)a2 correctionIdentifier:(id)a3;
- (id)languageDetectionUserContext;
- (void)sendSpeechCorrection:(id)a0 interactionIdentifier:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizeMultilingualSpeech:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizePhrases:(id)a1 languageModel:(id)a2 correctionIdentifier:(id)a3;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)a0;
- (id)_dictationOptions:(id)a0;
- (void)dictationConnection:(id)a0 didDetectLanguage:(id)a1 confidenceScores:(id)a2 isConfident:(BOOL)a3;

@end
