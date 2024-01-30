@interface MXAudioStatistics : NSObject {
    void /* function */ *mSendSingleMessage;
}

+ (id)sharedInstance;

- (id)initInternal;
- (void)sendSinglePerformanceMessageForRoutine:(const char *)a0 operationTime:(long long)a1 details:(id)a2;

@end
