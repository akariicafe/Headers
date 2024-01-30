@interface AFAggregator : NSObject {
    double _startTime;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) BOOL hasActiveRequest;

+ (void)logSiriSpeechRequestStarted;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)a0;
+ (void)logSiriRequestSucceeded;
+ (void)logLoadAssistant;
+ (id)_fullAggDKeyWithPrefix:(id)a0 error:(id)a1;
+ (BOOL)_timestamp:(id)a0 isAfter:(id)a1;
+ (BOOL)_hadUserEventSinceIntervalAgo:(double)a0;
+ (void)logRequestCompletedWithDuration:(double)a0;
+ (void)logSiriPausedMedia;
+ (void)missedAppContextForRequest;
+ (void)missedAlertContextForRequest;
+ (void)logRequestCancelAfterSeconds:(double)a0;
+ (void)logSiriQuickStopAction:(unsigned long long)a0;
+ (void)logSiriMediaVolumeAction:(long long)a0;
+ (void)logRequestLaunchedApp;
+ (void)logUILockCanceledVTActivation;
+ (void)logCreateAssistant;
+ (void)logPingTimeout;
+ (void)logEnabledState:(unsigned long long)a0;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)a0;
+ (void)logDESRecordingForLanguage:(id)a0 error:(id)a1;
+ (void)logLocalSpeechStartedWithDuration:(double)a0;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)a0;
+ (void)logLocalRecognitionLoadedForLanguage:(id)a0 duration:(double)a1;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)logLocalRecognitionWonForLanguage:(id)a0;
+ (void)logLocalRecognitionLostForLanguage:(id)a0;
+ (void)logDESEvaluationForLanguage:(id)a0 error:(id)a1;
+ (void)logCDMAssetEvictedForAssetType:(id)a0 language:(id)a1;
+ (void)noteSuccessOfRequest:(id)a0 inCar:(BOOL)a1;
+ (void)logPeriodicUsageIfNeeded;
+ (id)_stringForGatekeeperType:(unsigned long long)a0;
+ (void)logTimeToBeepWithDuration:(double)a0;
+ (void)logHomeButtonPressToActivationDuration:(double)a0;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)a0;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)a0;
+ (void)logSiriInvokedVia:(long long)a0;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)a0;
+ (void)logDictationCancelled;
+ (void)logDictationStarted;
+ (void)logDictationFailedWithError:(id)a0;
+ (void)logDictationSucceeded;

- (void)recordFailure:(int)a0 forConnectionType:(unsigned long long)a1;
- (void)recordSuccessForConnectionType:(unsigned long long)a0 isWarm:(BOOL)a1 forTimeInterval:(double)a2;
- (void)recordSessionRetrySuccess;
- (void)connectionDidFail;
- (void)connectionDidDrop;
- (void)beginSessionRetryPreferringWWAN:(BOOL)a0;
- (void)startWaitingForSpeechResponse;
- (void)speechResponseReceived;
- (void)speechResponseFailure;

@end
