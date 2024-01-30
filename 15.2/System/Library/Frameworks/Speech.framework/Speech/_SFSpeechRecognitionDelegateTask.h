@class SFSpeechRecognitionResult;
@protocol _SFSpeechRecognitionTaskDelegatePrivate;

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask {
    id<_SFSpeechRecognitionTaskDelegatePrivate> _delegate;
    SFSpeechRecognitionResult *_recognitionResultToReportAfterFinalSearchResults;
    _SFSpeechRecognitionDelegateTask *_selfReference;
    BOOL _waitForVoiceSearchResult;
    BOOL _hasSentRealSearchResults;
}

- (void)dictationConnection:(id)a0 didReceiveSearchResults:(id)a1 recognizedText:(id)a2 stable:(BOOL)a3 final:(BOOL)a4;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void)dictationConnection:(id)a0 didProcessAudioDuration:(double)a1;
- (void)dictationConnection:(id)a0 didRecognizePackage:(id)a1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)a0;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)a0;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)a0;
- (void)localSpeechRecognitionClient:(id)a0 speechRecordingDidFail:(id)a1;
- (void)localSpeechRecognitionClient:(id)a0 didRecognizePartialResult:(id)a1 rawPartialResult:(id)a2;
- (void)localSpeechRecognitionClient:(id)a0 didProcessAudioDuration:(double)a1;
- (void)localSpeechRecognitionClient:(id)a0 didFinishRecognition:(id)a1;
- (void)localSpeechRecognitionClient:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)_handleSpeechRecordingDidCancel;
- (void)_tellDelegateDidFinishSuccessfully:(BOOL)a0;
- (void)_handleDidFinishRecognition:(id)a0;
- (void)_handleDidRecognizePartialResult:(id)a0;
- (void)_handleDidProcessAudioDuration:(double)a0;
- (id)_initWithRequest:(id)a0 queue:(id)a1 languageCode:(id)a2 taskHint:(long long)a3 delegate:(id)a4;

@end
