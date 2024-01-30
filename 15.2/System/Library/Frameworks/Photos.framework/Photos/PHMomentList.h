@interface PHMomentList : PHCollectionList

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (BOOL)hasLocationInfo;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (BOOL)hasLocalizedTitle;
- (Class)changeRequestClass;
- (id)localizedLocationNames;
- (long long)collectionListType;
- (id)localizedTitle;

@end
