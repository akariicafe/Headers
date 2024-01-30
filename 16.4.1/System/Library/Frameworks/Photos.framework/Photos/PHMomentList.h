@interface PHMomentList : PHCollectionList

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;

- (long long)collectionListType;
- (id)localizedTitle;
- (id)description;
- (BOOL)hasLocationInfo;
- (BOOL)hasLocalizedTitle;
- (id)localizedLocationNames;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
