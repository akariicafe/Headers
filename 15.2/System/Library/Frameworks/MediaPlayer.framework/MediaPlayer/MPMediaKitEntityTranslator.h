@class NSString;

@interface MPMediaKitEntityTranslator : MPBaseEntityTranslator <MPMediaKitGenericObjectTranslator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)buildSchemaIfNeeded;
+ (id)translatorForType:(id)a0;
+ (id)createGenericObjectTranslator;
+ (id)createTranslatorForMPModelClass:(Class)a0;

- (void)mapPropertyKey:(id)a0 toPayloadKeyPaths:(id)a1 valueTransformer:(id /* block */)a2;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 mediaKitType:(id)a2 attributePayloadTransform:(id /* block */)a3;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 mediaKitType:(id)a2 payloadTransform:(id /* block */)a3;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 mediaKitType:(id)a2;
- (id)objectForPropertySet:(id)a0 payload:(id)a1 context:(id)a2;
- (void)mapPropertyKey:(id)a0 toPayloadKeyPath:(id)a1;
- (id)identifiersForPayload:(id)a0 context:(id)a1;
- (void)mapPropertyKey:(id)a0 toPayloadKeyPaths:(id)a1 valueTransformerFunction:(void /* function */ *)a2;
- (void)mapIdentifierCreationKeyPaths:(id)a0 transformBlock:(id /* block */)a1;

@end
