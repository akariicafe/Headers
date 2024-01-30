@class NSSet, NSArray, RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloads : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSArray *statusCommands;
@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *statusDeclarations;
@property (copy, nonatomic) NSArray *statusStatusItems;

+ (id)buildWithCommands:(id)a0 declarations:(id)a1 statusItems:(id)a2;
+ (id)buildRequiredOnlyWithCommands:(id)a0 declarations:(id)a1 statusItems:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
