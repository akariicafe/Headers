@class FBProcessCPUStatistics, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
    BKSProcessAssertion *_queue_mediaAssertion;
    BKSProcessAssertion *_queue_audioAssertion;
    BKSProcessAssertion *_queue_accessoryAssertion;
}

@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory;
@property (readonly, nonatomic) double elapsedCPUTime;

+ (id)_internalDebugEnvironmentVariables;

- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2 completion:(id /* block */)a3;
- (void)_finishInit;
- (void)_noteProcessDidExit:(id)a0;
- (void)_bootstrapDidComplete;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2;
- (BOOL)isApplicationProcess;
- (id)_createBootstrapContext;
- (void).cxx_destruct;
- (id)_queue_createLegacyAssertionForReason:(unsigned int)a0 withName:(id)a1;

@end
