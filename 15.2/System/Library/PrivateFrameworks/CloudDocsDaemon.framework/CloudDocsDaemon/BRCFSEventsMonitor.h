@class NSString, BRCRelativePath, BRCVolume, BRCAccountSession, BRCFairSource, NSObject, BRCFSEventsPersistedState, PQLConnection, NSMutableArray;
@protocol BRCFSEventsDelegate, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable> {
    BRCAccountSession *_session;
    NSString *_name;
    _Atomic int _suspendCount;
    _Atomic int _resetCount;
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    struct __FSEventStream { } *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    NSObject<OS_dispatch_queue> *_processQueue;
    BRCFairSource *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    unsigned long long _maxFSEventQueueSize;
    unsigned long long _fseventProcessBatchSize;
    BOOL _hasMarkSelf;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _drainEvents;
    BRCVolume *_volume;
}

@property (weak) id<BRCFSEventsDelegate> delegate;
@property (retain, nonatomic, setter=setDB:) PQLConnection *db;
@property (readonly, nonatomic) BRCRelativePath *root;
@property (readonly, nonatomic) BOOL volumeIsCaseSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)close;
- (BOOL)openWithRoot:(id)a0 isImmutableRoot:(BOOL)a1 volume:(id)a2 error:(id *)a3;
- (void)_close;
- (void)signalAfterCurrentFSEvent:(id)a0;
- (id)initWithAccountSession:(id)a0;
- (void)fseventOnRootWithEventID:(unsigned long long)a0 andReason:(id)a1;
- (BOOL)openWithRoot:(id)a0 volume:(id)a1 error:(id *)a2;
- (void)didProcessEventID:(unsigned long long)a0;
- (void)resetWithReason:(id)a0 dropFSEventID:(BOOL)a1;
- (void)_updatePersistedStateWithState:(id)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (BOOL)_queueEvents:(id)a0 markSelfEncountered:(BOOL)a1;
- (void)flushStream;
- (void)suspend;
- (BOOL)setUpStreamSynchronously:(BOOL)a0 reason:(id)a1 error:(id *)a2;
- (void)resume;
- (void)dealloc;
- (void)cancel;
- (id)initWithAccountSession:(id)a0 name:(id)a1;
- (void)processFseventBatch;
- (void)queueEvents:(id)a0 markSelfEncountered:(BOOL)a1;
- (void)resetWithReason:(id)a0;
- (BOOL)setUpRoot:(id)a0 isImmutableRoot:(BOOL)a1 volume:(id)a2 error:(id *)a3;
- (void)stopWatcher;
- (void)fseventAtPath:(id)a0 withFlags:(unsigned int)a1 andID:(unsigned long long)a2 eventIndex:(unsigned int)a3 eventCount:(unsigned int)a4 initialScan:(BOOL)a5;

@end
