@class BWMemoryPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface FigCaptureMemoryReporter : NSObject {
    NSObject<OS_dispatch_queue> *_memoryReporterDispatchQueue;
    NSObject<OS_dispatch_source> *_memoryReporterTimer;
    NSObject<OS_dispatch_source> *_memgraphCoolDownTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memgraphLock;
    BOOL _stateChangedSinceLastReport;
    int _numActiveClients;
    BOOL _activeClientsIncludeCamera;
    BOOL _activeClientsIncludeCameraMessagesApp;
    unsigned int _hostPort;
    unsigned long long _pageSize;
    int _my_pid;
    BOOL _alwaysGenerateMemGraph;
    BOOL _alwaysListTransactions;
    BOOL _alwaysGenerateLog;
    unsigned int _memGraphFootprintLowerKb;
    unsigned int _listTransactionsFootprintLowerKb;
    unsigned int _reportFootprintUpperBandkB;
    unsigned int _reportFootprintLowerBandkB;
    unsigned int _reportWiredUpperBandkB;
    unsigned int _reportWiredLowerBandkB;
    BOOL _anyLoggingEnabled;
    unsigned long long _highFrequencyMilliseconds;
    unsigned long long _lowFrequencyMilliSeconds;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _peakFootprintLock;
    unsigned long long _peakFootprint;
    unsigned long long _sessionStartFootprint;
    NSObject<OS_os_log> *_log;
    BWMemoryPool *_memoryPool;
}

@property (readonly) unsigned long long currentFootprint;

+ (id)sharedInstance;

- (unsigned long long)footprintDeltaSinceActiveClientStart;
- (void)resetPeakFootprint;
- (void)dealloc;
- (void)decrementActiveClientCount:(BOOL)a0 clientIsCameraMessagesApp:(BOOL)a1;
- (id)init;
- (void)incrementActiveClientCount:(BOOL)a0 clientIsCameraMessagesApp:(BOOL)a1 withMemoryPool:(id)a2;

@end
