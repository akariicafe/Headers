@class PLQuery, NSString, PHObjectPlaceholder;

@interface PHSmartAlbumChangeRequest : PHChangeRequest

@property (copy, nonatomic) PLQuery *userQuery;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSmartAlbum;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) BOOL customSortAscending;

+ (id)validateSmartAlbumTitle:(id)a0 error:(id *)a1;
+ (id)_changeRequestForSmartAlbum:(id)a0 userQuery:(id)a1;
+ (id)changeRequestForSmartAlbum:(id)a0;
+ (id)creationRequestForSmartAlbumWithTitle:(id)a0 userQuery:(id)a1;
+ (void)deleteSmartAlbumsFromAssetCollection:(id)a0;
+ (id)creationRequestForSmartAlbumCopyFromSmartAlbum:(id)a0;
+ (void)expungeSmartAlbumsFromAssetCollection:(id)a0;
+ (void)undeleteSmartAlbumsFromAssetCollection:(id)a0;
+ (void)_deleteSmartAlbums:(id)a0 withOperation:(long long)a1 topLevelSelector:(SEL)a2;

- (void)encodeToXPCDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)managedEntityName;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)initForNewObject;

@end
