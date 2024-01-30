@class HFTriggerActionSetsBuilder, NSArray, NSString, HMHome;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState>

@property (readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *homeIdentifier;
@property (readonly, copy, nonatomic) NSArray *serializedActionSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithActionSets:(id)a0 home:(id)a1;

@end
