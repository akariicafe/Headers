@class _SFSearchRequest, NSArray, NSDictionary, NSURL, NSString;

@interface SFSpeechRecognitionRequest : NSObject

@property (retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest;
@property (nonatomic) BOOL detectMultipleUtterances;
@property (nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) BOOL _forceOfflineRecognition;
@property (retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo;
@property (nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) double _maximumRecognitionDuration;
@property (retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides;
@property (retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL;
@property (nonatomic) long long taskHint;
@property (nonatomic) BOOL shouldReportPartialResults;
@property (copy, nonatomic) NSArray *contextualStrings;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (nonatomic) BOOL requiresOnDeviceRecognition;

- (id)init;
- (void).cxx_destruct;
- (id)_speechRequestOptions;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (BOOL)automaticallyEndpoint;
- (void)_setSearchRequests:(id)a0;
- (id)_searchRequests;
- (BOOL)_powerMeteringAvailable;
- (id)_dictationOptionsWithTaskHint:(long long)a0 requestIdentifier:(id)a1;

@end
