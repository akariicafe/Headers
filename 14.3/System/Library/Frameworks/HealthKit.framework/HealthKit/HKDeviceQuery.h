@class NSString, NSMutableArray;

@interface HKDeviceQuery : HKQuery <HKDeviceQueryClientInterface> {
    NSMutableArray *_resultDevices;
}

@property (readonly, copy, nonatomic) id /* block */ resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)clientRemote_deliverDevices:(id)a0 done:(BOOL)a1 reset:(BOOL)a2 query:(id)a3;
- (id)initWithObjectType:(id)a0 predicate:(id)a1 resultsHandler:(id /* block */)a2;
- (void)queue_deliverError:(id)a0;

@end
