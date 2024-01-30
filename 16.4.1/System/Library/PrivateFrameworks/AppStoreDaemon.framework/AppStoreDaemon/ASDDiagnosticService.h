@class NSString, ASDServiceBroker;

@interface ASDDiagnosticService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (void).cxx_destruct;
- (id)activeClientsWithError:(id *)a0;
- (void)addSubscriberWithEndpoint:(id)a0;
- (BOOL)pingWithError:(id *)a0;
- (BOOL)sendCommand:(long long)a0 withError:(id *)a1;
- (id)sendDetailsCommand:(long long)a0 timeout:(id)a1 withError:(id *)a2;
- (id)sendDetailsCommand:(long long)a0 withError:(id *)a1;

@end
