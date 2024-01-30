@class NSString;

@interface PHKeyword : PHObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortcut;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchKeywordsWithOptions:(id)a0;
+ (id)fetchKeywordsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchKeywordsWithTitles:(id)a0 options:(id)a1;
+ (id)fetchKeywordsForAsset:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)a0;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;

@end
