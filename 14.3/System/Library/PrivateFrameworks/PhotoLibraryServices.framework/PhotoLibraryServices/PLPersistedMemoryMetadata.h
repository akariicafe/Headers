@class NSDictionary, NSString, PLMemory, NSURL, NSDate, NSSet, NSData;

@interface PLPersistedMemoryMetadata : NSObject

@property (retain, nonatomic) PLMemory *memory;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isRejected) BOOL rejected;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isPending) BOOL pending;
@property (nonatomic, getter=isUserCreated) BOOL userCreated;
@property (nonatomic) short category;
@property (nonatomic) short subcategory;
@property (retain, nonatomic) NSString *keyAssetUUID;
@property (retain, nonatomic) NSSet *representativeAssetUUIDs;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (retain, nonatomic) NSData *movieData;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSData *photosGraphData;
@property (retain, nonatomic) NSData *assetListPredicate;
@property (nonatomic) double score;
@property (nonatomic) short notificationState;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic) unsigned short featuredState;

+ (BOOL)isValidPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPLMemory:(id)a0 metadataURL:(id)a1;
- (id)initWithPLMemory:(id)a0 pathManager:(id)a1;
- (void)writePersistedData;
- (id)_metadataData;
- (void)_saveMetadata;
- (BOOL)_updateAssetsInMemory:(id)a0 relationshipName:(id)a1 persistedAssetUUIDs:(id)a2 includePendingChanges:(BOOL)a3;
- (BOOL)isObsolete;
- (BOOL)_readMetadata;
- (id)description;
- (void)removePersistedData;
- (BOOL)updateAssetsInMemory:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (id)insertMemoryFromDataInManagedObjectContext:(id)a0;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (id)initWithPersistedDataAtURL:(id)a0;

@end
