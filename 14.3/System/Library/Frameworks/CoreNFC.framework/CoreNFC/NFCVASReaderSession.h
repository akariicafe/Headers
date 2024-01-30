@class NFTimer, NSArray;

@interface NFCVASReaderSession : NFCReaderSession {
    NFTimer *_presenceCheckTimer;
    NSArray *_vasConfig;
}

+ (BOOL)readingAvailable;

- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSession;
- (void)didTerminate:(id)a0;
- (void)didDetectTags:(id)a0;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)_callbackDidInvalidateWithError:(id)a0;
- (void)_callbackDidBecomeActive;
- (BOOL)_selectOSE;
- (id)_getVASDataWithConfig:(id)a0 lastInSequence:(BOOL)a1;
- (id)initWithVASCommandConfigurations:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
