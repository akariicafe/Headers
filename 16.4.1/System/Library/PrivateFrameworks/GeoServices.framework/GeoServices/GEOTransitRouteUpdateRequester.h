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

- (id)initPrivate;
- (void).cxx_destruct;
- (void)_cancelAllRequestsIfNeeded;
- (void)_cancelUpdateTimer;
- (void)_handleResponse:(id)a0 andError:(id)a1 forRequest:(id)a2;
- (void)_processRequests;
- (void)_purgeAllObjects;
- (void)_removeRequestsIfApplicable:(id)a0;
- (id)_requestsForUpdaters:(id)a0;
- (void)_scheduleUpdateTimerWithInterval:(double)a0;
- (void)_sendRequestForRequests:(id)a0;
- (id)_uuidsForRequests:(id)a0;
- (void)registerRouteUpdater:(id)a0;
- (void)unregisterRouteUpdater:(id)a0;

@end
