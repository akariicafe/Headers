@class NSString, NSArray, HFTriggerActionSetsBuilder;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) NSString *homeIdentifier;
@property (readonly, copy, nonatomic) NSArray *serializedActionSets;
@property (readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTriggerActionSetsBuilder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
