@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator

+ (void)buildSchemaIfNeeded;

- (void)mapPropertyKey:(id)a0 toMPContentItemSelector:(SEL)a1;
- (void)mapPropertyKey:(id)a0 toUserInfoKey:(id)a1;
- (void)mapRelationshipKey:(id)a0 toModelClass:(Class)a1;
- (id)sectionObjectForPropertySet:(id)a0 contentItem:(id)a1 context:(id)a2;
- (void)mapArtworkPropertyKey:(id)a0;
- (id)identifiersForContentItem:(id)a0;
- (void)mapIdentifierCreationBlock:(id /* block */)a0;
- (void)mapPropertyKey:(id)a0 toValueTransformer:(id /* block */)a1;
- (id)objectForPropertySet:(id)a0 contentItem:(id)a1 context:(id)a2;
- (void)mapPropertyKey:(id)a0 toDeviceSpecificUserInfoKey:(id)a1;

@end
