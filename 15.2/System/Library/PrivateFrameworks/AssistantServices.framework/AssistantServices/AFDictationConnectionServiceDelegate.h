@class NSString, AFDictationConnection;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {
    AFDictationConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictationConnection:(id)a0;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)a0;
- (oneway void)speechRecordingDidBeginWithOptions:(id)a0 sessionUUID:(id)a1 sessionRequestUUID:(id)a2;
- (oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)a0;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidFail:(id)a0;
- (oneway void)speechDidRecognizePhrases:(id)a0 utterances:(id)a1 usingSpeechModel:(id)a2 correctionContext:(id)a3 audioAnalytics:(id)a4;
- (oneway void)speechDidRecognizePartialResult:(id)a0;
- (oneway void)speechDidRecognizeTokens:(id)a0 usingSpeechModel:(id)a1;
- (oneway void)speechDidProcessAudioDuration:(double)a0;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)a0 usingSpeechModel:(id)a1;
- (oneway void)speechRecognitionDidFinishWithError:(id)a0;
- (oneway void)speechDidFinishWritingAudioFile:(id)a0 error:(id)a1;
- (oneway void)speechDidReceiveSearchResults:(id)a0 recognitionText:(id)a1 stable:(BOOL)a2 final:(BOOL)a3;
- (oneway void)speechDidRecognizePackage:(id)a0;
- (oneway void)speechDidDetectLanguage:(id)a0 confidenceScores:(id)a1 isConfident:(BOOL)a2;
- (oneway void)speechDidRecognizeMultilingualSpeech:(id)a0;
- (oneway void)languageDetectorFailedWithError:(id)a0;
- (void).cxx_destruct;

@end
