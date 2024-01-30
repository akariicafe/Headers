@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MiroResourceUsageMonitor : NSObject {
    long long __initialResidentMemoryBytes;
    long long __initialPeakResidentMemoryBytes;
    long long __maxResidentMemoryBytes;
    BOOL __isRunning;
    double __processorUsage;
    long long __memoryUsage;
    long long __peakMemoryUsage;
}

@property (nonatomic) struct rusage { struct timeval { long long tv_sec; int tv_usec; } ru_utime; struct timeval { long long tv_sec; int tv_usec; } ru_stime; long long ru_maxrss; long long ru_ixrss; long long ru_idrss; long long ru_isrss; long long ru_minflt; long long ru_majflt; long long ru_nswap; long long ru_inblock; long long ru_oublock; long long ru_msgsnd; long long ru_msgrcv; long long ru_nsignals; long long ru_nvcsw; long long ru_nivcsw; } _rusageStart;
@property (nonatomic) double _timeStart;
@property (nonatomic) long long _initialResidentMemoryKBytes;
@property (nonatomic) long long _initialPeakResidentMemoryKBytes;
@property (nonatomic) long long _maxResidentMemoryKBytes;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_pollingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (readonly, nonatomic) double processorUsage;
@property (readonly, nonatomic) long long memoryUsage;

+ (long long)_getResidentMemoryKBytes:(long long *)a0;
+ (id)sharedResourceUsageMonitor;

- (BOOL)isRunning;
- (id)description;
- (BOOL)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)stop;
- (void)_inqueue_start;
- (void)_inqueue_stop;

@end
