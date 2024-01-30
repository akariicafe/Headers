@class NSArray, HKQueryAnchor, NSString;

@interface _HKDatabaseChangesQuery : HKQuery <HKDatabaseChangesQueryClientInterface>

@property (nonatomic) long long anchorStrategyChangeCountLimit;
@property (readonly, nonatomic) id /* block */ resultsHandler;
@property (readonly, copy, nonatomic) NSArray *sampleTypes;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) BOOL includeChangeDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureServerInterface:(id)a0;
+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)client_deliverQueryAnchor:(id)a0 sampleTypeChanges:(id)a1 queryUUID:(id)a2;
- (id)initWithTypes:(id)a0 anchor:(id)a1 resultsHandler:(id /* block */)a2;

@end
