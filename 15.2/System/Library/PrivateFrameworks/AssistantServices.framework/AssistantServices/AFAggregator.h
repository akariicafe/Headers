@interface AFAggregator : NSObject {
    double _startTime;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) BOOL hasActiveRequest;

+ (void)logDictationStarted;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)a0;
+ (void)logDictationSucceeded;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)a0;
+ (void)logSiriSpeechRequestStarted;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)a0;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriInvokedVia:(long long)a0;
+ (id)_fullAggDKeyWithPrefix:(id)a0 error:(id)a1;
+ (void)logRequestCompletedWithDuration:(double)a0;
+ (void)missedAppContextForRequest;
+ (void)missedAlertContextForRequest;
+ (void)logRequestCancelAfterSeconds:(double)a0;
+ (void)logSiriQuickStopAction:(unsigned long long)a0;
+ (void)logSiriMediaVolumeAction:(long long)a0;
+ (void)logSiriPausedMedia;
+ (void)logRequestLaunchedApp;
+ (void)logUILockCanceledVTActivation;
+ (void)logCreateAssistant;
+ (void)logLoadAssistant;
+ (void)logPingTimeout;
+ (void)logEnabledState:(unsigned long long)a0;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)a0;
+ (void)logLocalSpeechStartedWithDuration:(double)a0;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)a0;
+ (void)logLocalRecognitionLoadedForLanguage:(id)a0 duration:(double)a1;
+ (void)logLocalRecognitionWonForLanguage:(id)a0;
+ (void)logLocalRecognitionLostForLanguage:(id)a0;
+ (void)logDESRecordingForLanguage:(id)a0 error:(id)a1;
+ (void)logDESEvaluationForLanguage:(id)a0 error:(id)a1;
+ (void)logCDMAssetEvictedForAssetType:(id)a0 language:(id)a1;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)a0 inCar:(BOOL)a1;
+ (id)_stringForGatekeeperType:(unsigned long long)a0;
+ (void)logTimeToBeepWithDuration:(double)a0;
+ (void)logHomeButtonPressToActivationDuration:(double)a0;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)a0;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)a0;

- (void)recordFailure:(int)a0 forConnectionType:(unsigned long long)a1;
- (void)recordSuccessForConnectionType:(unsigned long long)a0 isWarm:(BOOL)a1 forTimeInterval:(double)a2;
- (void)recordSessionRetrySuccess;
- (void)connectionDidFail;
- (void)connectionDidDrop;
- (void)speechResponseFailure;
- (void)beginSessionRetryPreferringWWAN:(BOOL)a0;
- (void)startWaitingForSpeechResponse;
- (void)speechResponseReceived;

@end
