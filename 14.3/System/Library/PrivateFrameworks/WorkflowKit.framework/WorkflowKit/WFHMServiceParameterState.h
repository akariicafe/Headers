@class NSDictionary, NSString, HMService;

@interface WFHMServiceParameterState : NSObject <WFParameterState>

@property (retain, nonatomic) NSDictionary *serializedService;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) HMService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithService:(id)a0 homeIdentifier:(id)a1;

@end
