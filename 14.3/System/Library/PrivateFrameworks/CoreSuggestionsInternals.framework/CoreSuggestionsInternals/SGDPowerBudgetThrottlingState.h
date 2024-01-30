@class NSObject;
@protocol OS_os_log;

@interface SGDPowerBudgetThrottlingState : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_os_log> *_log;
    struct { unsigned int magic; int opsLeft; long long nsecLeft; int extraOpsLeft; } _state;
    unsigned long long _absTimeAtOpStart;
    unsigned long long _timeSinceOpStart;
    int _fd;
    BOOL _opInProgress;
    BOOL _dirty;
    BOOL _wasOnBattery;
}

- (void).cxx_destruct;
- (void)refill;
- (void)dealloc;
- (void)_readThrottleState;
- (void)startWork;
- (BOOL)canDoExtraDiscretionaryWork;
- (id)initWithPath:(id)a0 log:(id)a1;
- (void)_writeThrottleStateLocked;
- (id)state;
- (void)didConsumeAnExtraBudgetedOperation;
- (BOOL)canDoDiscretionaryWork;
- (void)endWork;
- (void)_updateOperationProgress;
- (void)_writeThrottleState;

@end
