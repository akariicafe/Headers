@class NSDate, BiometricAutoBugCapture, AWDServerConnection;

@interface PearlCoreAnalytics : NSObject {
    AWDServerConnection *awdConnection;
    NSDate *_yogiErrorDate;
    BOOL _isInternalBuild;
    unsigned int _totalMatchAttempts;
    unsigned int _totalMatchAttemptsFaceDetected;
    unsigned int _totalMatchAttemptsFailed;
    unsigned int _totalMatchAttemptsSuccessful;
}

@property (copy, nonatomic) id /* block */ analyticsPerformCommandBlock;
@property (retain, nonatomic) BiometricAutoBugCapture *pearlAbc;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendMatchEventAnalytics:(id)a0 orientation:(unsigned long long)a1 identities:(id)a2;
- (void)sendFaceDetectEventAnalytics:(id)a0 fromMatch:(BOOL)a1 orientation:(unsigned long long)a2;
- (void)sendEnrollEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (void)sendPasscodeChallengeEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (void)sendBioLockoutEventAnalytics:(id)a0;
- (id)getDailyUpdateAnalytics;
- (int)sequenceTypeToCaptureMethod:(unsigned char)a0 forSequence:(unsigned char)a1;
- (void)sendPearlAbcEvent:(unsigned long long)a0;
- (void)checkYogiError:(int)a0;
- (void)countMatchAttempts:(BOOL)a0 withFaceDetectResult:(unsigned int)a1;
- (void)clearMatchAttempts;
- (void)persistsMatchAttempts;

@end
