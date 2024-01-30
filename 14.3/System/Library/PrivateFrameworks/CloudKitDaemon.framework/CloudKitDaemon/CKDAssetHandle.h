@class NSUUID, NSString, NSData, NSNumber;

@interface CKDAssetHandle : CKObject

@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSNumber *lastUsedTime;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *modTime;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSNumber *chunkCount;

+ (id)CKSQLiteClassName;
+ (id)descriptionWithStatus:(long long)a0;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)dictionaryPropertyEncoding;
- (id)statusDescription;
- (id)description;
- (id)initWithPropertyDictionary:(id)a0;
- (BOOL)shouldBeUnregisteredBeforeDeleted;
- (BOOL)mayHaveAssetCacheManagedFile;
- (id)initWithItemID:(id)a0 UUID:(id)a1 path:(id)a2;
- (BOOL)isEqualRevisionOfAssetHandle:(id)a0 differencesDescription:(id *)a1;
- (BOOL)mayBeEvicted;
- (BOOL)isEqualToAssetHandle:(id)a0 keys:(id)a1 differencesDescription:(id *)a2;

@end
