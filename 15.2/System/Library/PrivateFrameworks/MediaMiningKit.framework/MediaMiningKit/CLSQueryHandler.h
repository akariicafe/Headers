@class NSObject, CLSGeoServiceThread;
@protocol CLSQueryPerformerProtocol, OS_os_log, OS_dispatch_source, OS_dispatch_queue;

@interface CLSQueryHandler : NSObject {
    id<CLSQueryPerformerProtocol> _query;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _retryLevel;
    double _nextRetryTime;
    BOOL _alreadyLaunched;
    BOOL _didQueryFinish;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CLSGeoServiceThread *geoServiceThread;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long numberOfRetries;

- (void).cxx_destruct;
- (void)_cancel;
- (void)cacheItems;
- (void)_heartBeat;
- (void)cancel;
- (void)_forwardToGeoThread;
- (void)_startQuery;
- (id)initWithQueryPerformer:(id)a0 geoServiceThread:(id)a1 loggingConnection:(id)a2;
- (void)_handleQueryResultsForQuery:(id)a0 items:(id)a1 error:(id)a2;
- (void)_handleError:(id)a0 numberOfItems:(unsigned long long)a1;
- (unsigned long long)_cacheMapItems:(id)a0;

@end
