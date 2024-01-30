@class NSString, IDSBatchIDQueryController, NSArray, NSObject;
@protocol OS_dispatch_source;

@interface HDIDSReachabilityOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {
    BOOL _finished;
    BOOL _executing;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_destinationIdentifiers;
    NSString *_serviceIdentifier;
    id /* block */ _updateHandler;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _queryTimeout;
}

@property (retain, nonatomic) IDSBatchIDQueryController *queryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (id)initWithIdentifers:(id)a0 serviceIdentifier:(id)a1 updateHandler:(id /* block */)a2;
- (void)unitTest_updateOperationTimeout:(unsigned long long)a0;
- (void)updateDestinations:(id)a0;

@end
