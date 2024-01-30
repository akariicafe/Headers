@class NSString, NSData, STBlueprint;
@protocol STSerializableManagedObject;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSData *payloadPlist;
@property (retain, nonatomic) STBlueprint *blueprint;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blueprintConfigurationTypeForDeclaration:(id)a0;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 ofType:(id)a1;
+ (id)cemConfigurationIdentifierWithType:(id)a0 forUser:(id)a1;
+ (Class)cemDeclarationClassForConfigurationType:(id)a0;

@end
