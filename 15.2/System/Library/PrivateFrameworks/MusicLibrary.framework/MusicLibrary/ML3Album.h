@interface ML3Album : ML3Collection

+ (id)databaseTable;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)defaultOrderingTerms;
+ (id)allProperties;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)a0;
- (id)protocolItem;

@end
