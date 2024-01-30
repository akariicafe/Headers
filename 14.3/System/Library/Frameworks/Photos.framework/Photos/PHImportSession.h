@class NSString;

@interface PHImportSession : PHAssetCollection

@property (readonly, nonatomic) NSString *importSessionID;

+ (id)identifierCode;
+ (id)fetchImportSessionsWithOptions:(id)a0;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)managedEntityName;

- (id)localizedTitle;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
