@interface ML3Genre : ML3Collection

+ (void)initialize;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)propertiesForGroupingKey;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)a0;
- (id)protocolItem;

@end
