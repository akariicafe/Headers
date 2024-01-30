@class NSString, NSNumber, NSArray;

@interface PHCloudSharedAlbum : PHAssetCollection

@property (readonly, nonatomic, getter=isOwned) BOOL owned;
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled;
@property (readonly, nonatomic) short cloudAlbumSubtype;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFirstName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerLastName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFullName;
@property (readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey;
@property (readonly, retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (readonly, nonatomic) BOOL publicURLEnabled;
@property (readonly, nonatomic) NSString *cloudOwnerEmail;
@property (readonly, nonatomic) NSString *cloudOwnerPhone;
@property (readonly, nonatomic) NSString *cloudOwnerPersonID;
@property (readonly, nonatomic) NSArray *invitationRecords;

+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)fetchCloudSharedAlbumsWithGUIDs:(id)a0 options:(id)a1;
+ (id)fetchCloudSharedAlbumsWithOptions:(id)a0;

- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)a0;
- (id)description;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
