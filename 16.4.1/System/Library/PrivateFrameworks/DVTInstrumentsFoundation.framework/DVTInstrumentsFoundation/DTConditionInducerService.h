@class NSString, NSXPCConnection;

@interface DTConditionInducerService : DTXService <DTConditionInducerSupportUpdatesProtocol, DTConditionInducerServiceAPI>

@property (retain) NSXPCConnection *connectionToService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)disableConditionWithIdentifier:(id)a0;
- (void)_disconnectServiceConnection;
- (void)_requestAvailableConditionInducersWithCompletion:(id /* block */)a0;
- (void)_requestDisableActiveConditionInducerWithCompletion:(id /* block */)a0;
- (void)_requestDisableConditionInducerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_requestEnableConditionInducerWithIdentifier:(id)a0 profileIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)activeConditionsDidStop;
- (void)activeConditionsWillStop;
- (id)availableConditionInducers;
- (id)disableActiveCondition;
- (id)enableConditionWithIdentifier:(id)a0 profileIdentifier:(id)a1;

@end
