@class NSObject;
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
    unsigned int _memGraphFootprintLowerKb;
    unsigned int _listTransactionsFootprintLowerKb;
    unsigned int _reportFootprintUpperBandkB;
    unsigned int _reportFootprintLowerBandkB;
    unsigned int _reportWiredUpperBandkB;
    unsigned int _reportWiredLowerBandkB;
    BOOL _anyLoggingEnabled;
    NSObject<OS_os_log> *_log;
}

+ (id)sharedInstance;

- (void)incrementActiveClientCount:(BOOL)a0 clientIsCameraMessagesApp:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)decrementActiveClientCount:(BOOL)a0 clientIsCameraMessagesApp:(BOOL)a1;

@end
