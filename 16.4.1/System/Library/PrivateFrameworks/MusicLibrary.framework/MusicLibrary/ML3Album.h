@interface ML3Album : ML3Collection

+ (void)initialize;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)a0 inLibrary:(id)a1;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateTrackValues:(id)a0;

@end
