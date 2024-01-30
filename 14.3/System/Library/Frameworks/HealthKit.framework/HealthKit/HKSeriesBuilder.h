@class HKRetryableOperation, NSUUID, HKTaskServerProxyProvider, HKHealthStore, NSString, HKSeriesBuilderConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface> {
    _Atomic int _state;
}

@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKRetryableOperation *retryableOperation;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) HKSeriesBuilderConfiguration *configuration;
@property (readonly, nonatomic) HKHealthStore *store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)taskServerIdentifier;
+ (id)serverInterface;
+ (void)configureClientInterface:(id)a0;
+ (void)configureServerInterface:(id)a0;

- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)discard;
- (void)_resourceQueue_addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)freezeBuilderWithCompletion:(id /* block */)a0;
- (void)recoverWithCompletion:(id /* block */)a0;
- (void)_resourceQueue_discardWithHandler:(id /* block */)a0;
- (void)clientRemote_didChangeToState:(long long)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (id)_initWithHealthStore:(id)a0 identifier:(id)a1 configuration:(id)a2;

@end
