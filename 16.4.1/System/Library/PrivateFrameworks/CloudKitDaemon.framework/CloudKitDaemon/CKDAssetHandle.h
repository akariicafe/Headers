@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CKDAssetHandle : CKObject

@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSDate *lastUsedTime;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSDate *modTime;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSNumber *chunkCount;
@property (retain, nonatomic) NSNumber *isCloned;

+ (id)descriptionWithStatus:(long long)a0;

- (id)dictionaryPropertyEncoding;
- (id)statusDescription;
- (BOOL)mayBeEvicted;
- (BOOL)isEqualRevisionOfAssetHandle:(id)a0 differencesDescription:(id *)a1;
- (BOOL)shouldBeUnregisteredBeforeDeleted;
- (id)initWithPropertyDictionary:(id)a0;
- (BOOL)mayHaveAssetCacheManagedFile;
- (id)initWithItemID:(id)a0 UUID:(id)a1 path:(id)a2;
- (BOOL)isEqualToAssetHandle:(id)a0 keys:(id)a1 differencesDescription:(id *)a2;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;

@end
