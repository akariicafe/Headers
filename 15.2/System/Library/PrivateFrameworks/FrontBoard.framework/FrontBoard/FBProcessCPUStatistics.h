@class RBSProcessHandle;

@interface FBProcessCPUStatistics : NSObject {
    RBSProcessHandle *_handle;
    struct FBProcessTimes { double beginUserCPUElapsedTime; double beginSystemCPUElapsedTime; double beginIdleCPUElapsedTime; double beginApplicationCPUElapsedTime; } _times;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) double totalElapsedTime;
@property (readonly, nonatomic) double totalElapsedUserTime;
@property (readonly, nonatomic) double totalElapsedSystemTime;
@property (readonly, nonatomic) double totalElapsedIdleTime;

- (void)_lock_getApplicationCPUTimesForUser:(out double *)a0 system:(out double *)a1 idle:(out double *)a2;
- (void).cxx_destruct;
- (void)_hostwideUserElapsedCPUTime:(out double *)a0 systemElapsedCPUTime:(out double *)a1 idleElapsedCPUTime:(out double *)a2;
- (id)descriptionForCrashReport;
- (id)initWithProcessHandle:(id)a0;
- (void)reset;

@end
