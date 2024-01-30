@class NSDate;

@interface PHMomentList : PHCollectionList

@property (readonly, nonatomic) int sortIndex;
@property (readonly, nonatomic) short granularityLevel;
@property (readonly, nonatomic) NSDate *representativeDate;

+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)managedEntityName;

- (id)localizedTitle;
- (Class)changeRequestClass;
- (long long)collectionListType;
- (void).cxx_destruct;
- (BOOL)hasLocalizedTitle;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (BOOL)hasLocationInfo;
- (id)localizedLocationNames;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
