@class FCContentArchive, NSString, NSURL, FCInterestToken, NTPBResourceRecord, FCAssetHandle;

@interface FCResource : NSObject <FCContentArchivable>

@property (retain, nonatomic) NTPBResourceRecord *resourceRecord;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) FCAssetHandle *assetHandle;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic, getter=isOnDisk) BOOL onDisk;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)initWithPermanentURLForResourceID:(id)a0 cacheLifetimeHint:(long long)a1 contentContext:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceID:(id)a0 assetHandle:(id)a1;
- (id)initWithRecord:(id)a0 interestToken:(id)a1 assetManager:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
