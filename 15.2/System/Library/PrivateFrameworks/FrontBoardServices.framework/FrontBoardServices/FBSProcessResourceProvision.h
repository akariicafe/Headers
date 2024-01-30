@class RBSProcessHandle, BSAbsoluteMachTimer, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSAbsoluteMachTimer *_timer;
    RBSProcessHandle *_processHandle;
    double _timerFireInterval;
    unsigned long long _timerFireCount;
}

@property (nonatomic) long long type;
@property (nonatomic) struct { long long type; unsigned long long value; unsigned long long reserved; } allowance;

+ (id)provisionWithResourceType:(long long)a0 timeInterval:(double)a1;
+ (id)provisionWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;

- (void)_stopMonitoring;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)a0;
- (BOOL)isResourceProvision;
- (void)_prepareForReuse;
- (BOOL)allowanceRemaining:(out struct { long long x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void).cxx_destruct;
- (BOOL)_queue_updateConsumption;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (void)_beginMonitoring;
- (long long)type;
- (void)_queue_evaluateConsumptionFromTimer:(BOOL)a0;
- (void)dealloc;
- (void)_updateProgress;
- (id)initWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
