@interface PLTimedPerfCheck : NSObject {
    BOOL _isSessionCompleted;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionCompletedLock;
    struct pc_session { } *_pc_session;
    double _initialProcessMemoryPeak;
    double _initialProcessMemoryCurrent;
}

+ (id)start;

- (void)setup;
- (id)perfCheckLogStringWithPerfCheckInfo:(id)a0;
- (id)init;
- (void)dealloc;
- (id)stop;
- (id)endSessionAndReturnPerfCheckExtraInformation;
- (struct PLUnitMultiplier { double x0[6]; char *x1[6]; })perfUnitsFromPerfCheckInfo:(id)a0;

@end
