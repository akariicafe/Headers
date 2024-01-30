@class NSString, NSNumber;

@interface PHCloudSharedAlbum : PHAssetCollection

@property (readonly, nonatomic, getter=isOwned) BOOL owned;
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled;
@property (readonly, nonatomic) short cloudAlbumSubtype;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFirstName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerLastName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFullName;
@property (readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;

- (id)localizedSharedByLabelAllowsEmail:(BOOL)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (BOOL)isOwnedCloudSharedAlbum;

@end
