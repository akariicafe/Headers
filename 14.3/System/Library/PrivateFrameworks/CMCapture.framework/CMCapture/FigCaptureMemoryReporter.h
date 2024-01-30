@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureMemoryReporter : NSObject {
    NSObject<OS_dispatch_queue> *_memoryReporterDispatchQueue;
    NSObject<OS_dispatch_source> *_memoryReporterTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _numActiveClients;
    unsigned int _hostPort;
    unsigned long long _pageSize;
    int _my_pid;
    unsigned int _reportFootprintUpperBandkB;
    unsigned int _reportFootprintLowerBandkB;
    unsigned int _reportWiredUpperBandkB;
    unsigned int _reportWiredLowerBandkB;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)decrementActiveClientCount;
- (void)incrementActiveClientCount;
- (void)_updateActiveClientCountWithDelta:(int)a0;
- (void)_changeReportFrequency:(unsigned long long)a0;
- (void)_reportMemoryStatus;
- (void)_startReporting;

@end
