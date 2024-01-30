@class NSSet, NSString, NSArray;

@interface RMModelManagementStatusSubscriptionsDeclaration_StatusItem : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSArray *payloadProperties;
@property (copy, nonatomic) NSString *payloadPredicate;

+ (id)buildRequiredOnlyWithName:(id)a0;
+ (id)buildWithName:(id)a0 properties:(id)a1 predicate:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
