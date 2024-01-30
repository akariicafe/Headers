@class NSString;
@protocol HKQueryServerInterface;

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface> {
    BOOL _hasDeliveredInitialResults;
    id<HKQueryServerInterface> _serverProxy;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureServerInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)client_deliverSources:(id)a0 forQuery:(id)a1;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (id)initWithSampleType:(id)a0 samplePredicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void)client_deliverUpdatedSources:(id)a0 added:(id)a1 forQuery:(id)a2;
- (void).cxx_destruct;

@end
