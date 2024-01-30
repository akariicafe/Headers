@class NSDate, NSString, NSArray, CUTWeakReference, NSTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {
    NSString *_serviceName;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_listenerID;
    NSArray *_destinations;
    NSMutableArray *_destinationsToQuery;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    id _rateLimiter;
    CUTWeakReference *_parent;
    int _numberOfQueriesDone;
    BOOL _isDead;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDestinations:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(id)a0 delegate:(id)a1 queue:(id)a2 parent:(id)a3;
- (void)_invalidateNextQueryTimer;
- (void)_scheduleNextQuery:(double)a0;
- (void)_calloutToDelegateWithResult:(id)a0 error:(id)a1;
- (void)_nextQuery:(id)a0;
- (BOOL)underLimit;
- (void)invalidate;

@end
