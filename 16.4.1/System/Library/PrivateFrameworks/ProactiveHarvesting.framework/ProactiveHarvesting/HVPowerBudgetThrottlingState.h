@class NSObject;
@protocol OS_os_log;

@interface HVPowerBudgetThrottlingState : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_os_log> *_log;
    struct { unsigned int magic; int opsLeft; long long nsecLeft; int extraOpsLeft; int budgetState; long long timeOfLastChange; } _state;
    unsigned long long _absTimeAtOpStart;
    unsigned long long _timeSinceOpStart;
    int _fd;
    BOOL _opInProgress;
    BOOL _dirty;
    BOOL _wasOnBattery;
    BOOL _wasEnabled;
}

- (void)checkBatteryStateForRefill;
- (id)state;
- (void)didConsumeAnExtraBudgetedOperation;
- (id)initWithPath:(id)a0 log:(id)a1;
- (void)endWork;
- (void)updateState:(unsigned int)a0;
- (void)startWork;
- (void)dealloc;
- (BOOL)canDoDiscretionaryWork;
- (void)refillState;
- (BOOL)canDoDiscretionaryWork:(unsigned int *)a0;
- (BOOL)canDoExtraDiscretionaryWork;
- (void).cxx_destruct;

@end
