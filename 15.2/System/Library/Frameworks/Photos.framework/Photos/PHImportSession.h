@class NSString;

@interface PHImportSession : PHAssetCollection

@property (readonly, nonatomic) NSString *importSessionID;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchImportSessionsWithOptions:(id)a0;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
