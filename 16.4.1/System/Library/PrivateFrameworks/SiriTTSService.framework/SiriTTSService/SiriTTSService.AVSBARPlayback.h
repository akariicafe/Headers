@interface SiriTTSService.AVSBARPlayback : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ audioQueueBufferLock;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ synchronizer;
    void /* unknown type, empty encoding */ dataQueue;
    void /* unknown type, empty encoding */ stateLock;
    void /* unknown type, empty encoding */ mappedAudioQueuedTimeStamp;
    void /* unknown type, empty encoding */ rendererEnqueuedAudioDuration;
    void /* unknown type, empty encoding */ mappedData;
    void /* unknown type, empty encoding */ enqueuedMappedAudioInfo;
    void /* unknown type, empty encoding */ startedProvidingData;
    void /* unknown type, empty encoding */ noRemainTasks;
    void /* unknown type, empty encoding */ asbd;
    void /* unknown type, empty encoding */ discontinuedDuringPlayback;
    void /* unknown type, empty encoding */ audioPowerProvider;
}

- (void)handleMediaServerReset;

@end
