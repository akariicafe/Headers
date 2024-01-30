@class _SFSearchRequest, NSArray, NSDictionary, NSURL, NSString;

@interface SFSpeechRecognitionRequest : NSObject

@property (retain, nonatomic, getter=_afDictationRequestParams, setter=_setAFDictationRequestParams:) NSDictionary *_afDictationRequestParams;
@property (retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest;
@property (nonatomic) BOOL detectMultipleUtterances;
@property (nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) BOOL _forceOfflineRecognition;
@property (retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo;
@property (nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) double _maximumRecognitionDuration;
@property (retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides;
@property (retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL;
@property (retain, nonatomic, getter=_dynamicLanguageModel, setter=_setDynamicLanguageModel:) NSURL *_dynamicLanguageModel;
@property (retain, nonatomic, getter=_dynamicVocabulary, setter=_setDynamicVocabulary:) NSURL *_dynamicVocabulary;
@property (nonatomic, getter=_forceUseSiriProcess, setter=_setForceUseSiriProcess:) BOOL _forceUseSiriProcess;
@property (nonatomic) long long taskHint;
@property (nonatomic) BOOL shouldReportPartialResults;
@property (copy, nonatomic) NSArray *contextualStrings;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (nonatomic) BOOL requiresOnDeviceRecognition;

+ (void)initialize;

- (id)_speechRequestOptions;
- (void).cxx_destruct;
- (id)init;
- (id)_startedLocalConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (BOOL)automaticallyEndpoint;
- (void)_setSearchRequests:(id)a0;
- (id)_searchRequests;
- (BOOL)_powerMeteringAvailable;
- (id)_dictationOptionsWithTaskHint:(long long)a0 requestIdentifier:(id)a1;
- (id)_requestParametersWithTaskHint:(long long)a0 requestIdentifier:(id)a1 narrowband:(BOOL)a2 language:(id)a3;
- (id)_sandboxExtensionsWithError:(id *)a0;

@end
