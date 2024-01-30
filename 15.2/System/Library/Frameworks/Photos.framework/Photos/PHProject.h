@class NSData, NSString, NSDate;

@interface PHProject : PHAssetCollection {
    NSDate *_creationDate;
}

@property (readonly, nonatomic) NSData *projectData;
@property (readonly, nonatomic) NSString *projectExtensionIdentifier;
@property (readonly, nonatomic) NSString *projectDocumentType;
@property (readonly, nonatomic) NSString *projectRenderUuid;
@property (readonly, nonatomic) NSData *projectExtensionData;
@property (readonly, nonatomic) BOOL hasProjectPreview;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchProjectsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchProjectsWithOptions:(id)a0;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (BOOL)canPerformEditOperation:(long long)a0;
- (id)creationDate;
- (void).cxx_destruct;
- (BOOL)canContainCustomKeyAssets;

@end
