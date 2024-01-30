@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;
+ (id)translatorForKind:(id)a0;

- (void)mapPropertyKey:(id)a0 toPayloadKeyPaths:(id)a1 valueTransformer:(id /* block */)a2;
- (void)mapPropertyKey:(id)a0 toPayloadKeyPaths:(id)a1 valueTransformerFunction:(void /* function */ *)a2;
- (void)mapIdentifierCreationKeyPaths:(id)a0 transformBlock:(id /* block */)a1;
- (id)prepareSource:(id)a0 context:(id)a1 properties:(id)a2;
- (id)identifiersForPayload:(id)a0 context:(id)a1;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1 payloadTransform:(id /* block */)a2;
- (void)mapPropertyKey:(id)a0 toPayloadKeyPath:(id)a1;
- (id)objectForPropertySet:(id)a0 payload:(id)a1 context:(id)a2;

@end
