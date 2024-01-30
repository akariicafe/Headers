@class NSString, NSDictionary, NSOperationQueue;

@interface CACMessageTracerUtilities : NSObject <_SFSpeechRecognitionTaskDelegatePrivate, SFSpeechRecognitionTaskDelegate> {
    NSOperationQueue *_remoteSpeechOperationQueue;
}

@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *targetApplicationIdentifier;
@property (retain, nonatomic) NSString *textAreaIdentifierOrLabel;
@property (retain, nonatomic) NSString *textAreaSelectionRange;
@property (retain, nonatomic) NSDictionary *customUserCommandProperties;
@property (retain, nonatomic) NSDictionary *recognitionProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCACMessageTracerUtilities;

- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTaskWasCancelled:(id)a0;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_prepareToSendAudioDataToAppleServers;
- (id)_mutablePlistCompatibleObjectFromObject:(id)a0;
- (void)sendCoreAnalyticsForRecognizedCommandIdentifier:(id)a0 appIdentifier:(id)a1;
- (void)sendRecentAudioDataToAppleServers;
- (id)dictionaryOfNormallyStaticPreferenceValuesForCoreAnalytics;
- (void)removeCachedAudioFile;
- (void)logCommandWithIdentifier:(id)a0;

@end
