@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VTAggregator : NSObject {
    unsigned long long _currentState;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
    double _lastAggTimeFalseWakeUp;
    unsigned long long _numFalseWakeUp;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_languageCode;
    NSString *_assetString;
}

+ (id)sharedAggregator;

- (void)setLanguageCode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logFalseWakeUp:(BOOL)a0;
- (void)logTimeVoiceTriggerTransitionsToState:(unsigned long long)a0;
- (void)logVoiceProfilePruningFailureWithReasonCode:(unsigned long long)a0;
- (void)logProfileUpdateUtt:(id)a0 withScore:(double)a1;
- (void)logProfileUpdateScoreMSE:(double)a0;
- (void)logProfileUpdateNumDiscardedUttsPHS:(int)a0;
- (void)logProfileUpdateNumPrunedUttsPHS:(int)a0;
- (void)logProfileUpdateNumRetainedUttsPHS:(int)a0;
- (void)logTdPsrSATRetrainingTimedOut;
- (void)logTdPsrSATRetrainingWaitTimeMs:(double)a0;
- (void)logTdPsrFailedDuringSATRetraining;
- (void)_logUptime;
- (id)_makeKeyWithLanguageAndAssetString:(id)a0;
- (void)_addValueForScalarKey:(id)a0 withValue:(long long)a1;
- (void)_pushValueForDistributionKey:(id)a0 withValue:(double)a1;
- (id)_makeKeyWithLanguageCode:(id)a0;
- (id)_makeKey:(id)a0;
- (void)cumulativeUptime:(id *)a0 cumulativeDowntime:(id *)a1 reset:(BOOL)a2;
- (void)setAssetString:(id)a0;
- (void)logActivation;
- (void)logSecondPassResult:(BOOL)a0;
- (void)logZeroRunAudio:(int)a0;
- (void)logRecognizerTimedOut;
- (void)logProfileUpdateNumDeletedUttsStrategy:(int)a0;
- (void)logTdPsrSATDetectionWaitTimeMs:(double)a0;
- (void)logTdPsrFailedDuringSATDetection;
- (void)logTdPsrSATDetectionTimedOut;
- (void)logTdPsrExtraAudioSamplesProcessed:(unsigned long long)a0;

@end
