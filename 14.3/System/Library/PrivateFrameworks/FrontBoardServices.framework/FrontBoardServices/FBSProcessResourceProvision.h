@class BSTimer, RBSProcessHandle, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSTimer *_timer;
    RBSProcessHandle *_processHandle;
}

@property (nonatomic) long long type;
@property (nonatomic) struct { long long type; unsigned long long value; unsigned long long reserved; } allowance;

+ (id)provisionWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (id)provisionWithResourceType:(long long)a0 timeInterval:(double)a1;

- (void)_queue_noteAllowanceExhausted;
- (void)_beginMonitoring;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_stopMonitoring;
- (void)dealloc;
- (BOOL)allowanceRemaining:(out struct { long long x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)_updateProgress;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)a0;
- (BOOL)isResourceProvision;
- (void)_prepareForReuse;
- (BOOL)_queue_updateConsumption;
- (void)_queue_stopMonitoring;
- (long long)type;
- (id)succinctDescriptionBuilder;
- (void)_queue_evaluateConsumption;
- (id)initWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
