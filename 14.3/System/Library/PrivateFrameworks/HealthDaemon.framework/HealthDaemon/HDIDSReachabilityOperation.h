@class NSArray, NSString, IDSBatchIDQueryController, NSObject;
@protocol OS_dispatch_source;

@interface HDIDSReachabilityOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    BOOL _finished;
    BOOL _executing;
}

@property (copy, nonatomic) NSArray *destinationIdentifiers;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) IDSBatchIDQueryController *queryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (BOOL)isReady;
- (void)finish;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)_startTimer;
- (BOOL)isFinished;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (BOOL)isAsynchronous;
- (void)start;
- (void)_queryDidTimeout;
- (id)initWithIdentifers:(id)a0 serviceIdentifier:(id)a1 completion:(id /* block */)a2;

@end
