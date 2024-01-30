@class NSSet, NSArray;

@interface RMModelStatusManagementDeclarations : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSArray *statusActivations;
@property (copy, nonatomic) NSArray *statusConfigurations;
@property (copy, nonatomic) NSArray *statusAssets;

+ (id)buildWithActivations:(id)a0 configurations:(id)a1 assets:(id)a2;
+ (id)buildRequiredOnlyWithActivations:(id)a0 configurations:(id)a1 assets:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
