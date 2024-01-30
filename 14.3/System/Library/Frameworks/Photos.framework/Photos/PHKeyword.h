@class NSString;

@interface PHKeyword : PHObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortcut;

+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (id)managedEntityName;
+ (id)fetchKeywordsWithOptions:(id)a0;
+ (id)fetchKeywordsWithTitles:(id)a0 options:(id)a1;
+ (id)fetchKeywordsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchKeywordsForAsset:(id)a0 options:(id)a1;
+ (id)localIdentifierWithUUID:(id)a0;

- (Class)changeRequestClass;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
