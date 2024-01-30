@interface MXTestCore : MXTestSessionFactory {
    unsigned char mIsInterruptionResumable;
    int mInterruptionError;
    struct __CFBoolean { } *mMutePolicyForMXSessionIsMuted;
    int mMutePolicyError;
    BOOL mNotificationReceived;
}

- (int)testIsRecording:(struct opaqueCMSession { } *)a0;
- (int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(struct opaqueCMSession { } *)a0 nonMixableSession:(struct opaqueCMSession { } *)a1;
- (int)testInterruption:(struct opaqueCMSession { } *)a0 andInterruptor:(struct opaqueCMSession { } *)a1 interruptionTypeResumable:(unsigned char)a2;
- (int)testDucking;
- (int)testIsActive:(struct opaqueCMSession { } *)a0;
- (int)testIsPlaying:(struct opaqueCMSession { } *)a0;
- (int)testSimultaneousPlaybackOfMixableSessions:(struct opaqueCMSession { } *)a0 otherSession:(struct opaqueCMSession { } *)a1;
- (int)testDeactivationOfActiveAndNonPlayingSessions;
- (int)testMultipleRecordingClients;
- (int)testNavigationApp:(struct opaqueCMSession { } *)a0;
- (int)testPreIntegrate;
- (int)testSystemSoundsAndHapticsAudioHWControlBehaviors;
- (int)testPriorityBasedInterruption;
- (int)testNowPlayingApp;
- (int)testHDMILatencyManager;
- (int)testPrefersNoInterruptionsByRingtonesAndAlerts;
- (int)testMXSession;
- (int)testAudioQueueOptionsForMXSession;
- (int)testMutePriority;
- (int)testPiPPolicies;
- (int)testMXSessionMutedNotificationForMutePriority;
- (int)testPiPMixingPolicies;
- (int)testMXSessionRefresh;
- (int)testShadowingAudioSessionID;
- (int)testSomeOtherPrimaryAudioCategoryClientIsPlaying;
- (int)testSystemSounds;
- (int)testIsAllowedRecordingFromBackground;
- (int)testPlaybackHandoff;
- (int)testCPMS;
- (int)testMXSystemController;
- (int)testSharedMXSystemController;
- (int)testLowLatencyVADConfiguration;
- (int)testMXSessionClientType;
- (int)testAllowSystemSoundsWhileRecording;

@end
