@class ASReachabilityStatusCache, NSSet, NSString, NSMutableSet, IDSBatchIDQueryController, NSObject, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface ASReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    BOOL _finished;
    BOOL _executing;
    NSMutableSet *_remainingDestinations;
    IDSBatchIDQueryController *_batchQueryController;
    NSObject<OS_dispatch_source> *timer;
    NSMutableDictionary *_rawIDSDestinationToOriginalDestination;
    NSMutableDictionary *_results;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) ASReachabilityStatusCache *statusCache;
@property (copy, nonatomic) NSSet *destinations;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (void)finish;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isConcurrent;
- (void)_queryTimedOut;

@end
