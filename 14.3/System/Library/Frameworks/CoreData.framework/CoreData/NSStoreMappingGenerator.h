@interface NSStoreMappingGenerator : NSObject

+ (id)defaultMappingGenerator;
+ (void)invalidate;

- (id)mappingsDictForConfigurationWithName:(id)a0 inModel:(id)a1;
- (id)mappingForRelationship:(id)a0 forConfigurationWithName:(id)a1;
- (id)joinsForRelationship:(id)a0;
- (id)internalNameForEntityName:(id)a0 version:(int)a1;
- (id)mappingsForConfigurationWithName:(id)a0 inModel:(id)a1;
- (id)mappingForEntity:(id)a0 forConfigurationWithName:(id)a1;
- (id)internalNameForPropertyName:(id)a0 version:(int)a1;
- (id)externalNameForEntityName:(id)a0;
- (id)externalNameForPropertyName:(id)a0;
- (id)mappingForAttribute:(id)a0 forConfigurationWithName:(id)a1;
- (id)primaryKeyForEntity:(id)a0;

@end
