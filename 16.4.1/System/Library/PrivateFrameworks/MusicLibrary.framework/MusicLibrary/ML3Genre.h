@interface ML3Genre : ML3Collection

+ (void)initialize;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateTrackValues:(id)a0;

@end
