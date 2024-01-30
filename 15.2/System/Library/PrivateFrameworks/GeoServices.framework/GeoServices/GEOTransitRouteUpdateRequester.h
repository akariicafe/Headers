@class NSTimer, NSMutableSet, NSHashTable;

@interface GEOTransitRouteUpdateRequester : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updatersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processedRequestsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inflightRequestsLock;
    NSMutableSet *_inflightRequests;
    NSTimer *_updateTimer;
    unsigned long long _maxRetries;
    unsigned long long _numRetries;
}

@property (nonatomic) double initialDelay;
@property (nonatomic) double requestInterval;
@property (readonly, nonatomic) NSHashTable *updaters;
@property (readonly, nonatomic) NSMutableSet *processedRequests;

+ (id)sharedInstance;

- (void)_cancelUpdateTimer;
- (void)_scheduleUpdateTimerWithInterval:(double)a0;
- (void)_purgeAllObjects;
- (id)initPrivate;
- (void)_cancelAllRequestsIfNeeded;
- (void)_removeRequestsIfApplicable:(id)a0;
- (void)_processRequests;
- (id)_requestsForUpdaters:(id)a0;
- (void)_sendRequestForRequests:(id)a0;
- (id)_uuidsForRequests:(id)a0;
- (void)_handleResponse:(id)a0 andError:(id)a1 forRequest:(id)a2;
- (void)registerRouteUpdater:(id)a0;
- (void)unregisterRouteUpdater:(id)a0;
- (void).cxx_destruct;

@end
