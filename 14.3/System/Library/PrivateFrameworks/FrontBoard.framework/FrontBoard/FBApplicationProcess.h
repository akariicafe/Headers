@class FBProcessCPUStatistics, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
    BKSProcessAssertion *_queue_mediaAssertion;
    BKSProcessAssertion *_queue_audioAssertion;
    BKSProcessAssertion *_queue_accessoryAssertion;
    unsigned long long _htAppIdentifier;
    unsigned long long _launchToken;
}

@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory;
@property (readonly, nonatomic) double elapsedCPUTime;

+ (id)_internalDebugEnvironmentVariables;

- (void)_finishInit;
- (void)_noteLaunchDidComplete;
- (void).cxx_destruct;
- (BOOL)isApplicationProcess;
- (BOOL)_wantsStateUpdates;
- (void)_bootstrapDidComplete;
- (unsigned long long)_activationInfoForEvent:(int)a0 withToken:(unsigned long long)a1;
- (id)_queue_createLegacyAssertionForReason:(unsigned int)a0 withName:(id)a1;
- (id)_createBootstrapContext;
- (void)_noteProcessDidExit:(id)a0;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2 completion:(id /* block */)a3;

@end
