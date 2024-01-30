@interface ML3AlbumArtist : ML3Collection

+ (void)initialize;
+ (id)databaseTable;
+ (id)predisambiguatedProperties;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
+ (id)allProperties;
+ (id)defaultOrderingTerms;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (id)sectionPropertyForProperty:(id)a0;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)a0;
- (id)protocolItem;

@end
