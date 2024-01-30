@class NSString, NSArray, PFCloudKitMetadataCache, NSMutableDictionary, NSDictionary, NSObject, NSCloudKitMirroringDelegateOptions, NSMutableArray, CKRecordZone;
@protocol PFCloudKitSerializerDelegate;

@interface PFCloudKitSerializer : NSObject {
    NSMutableDictionary *_manyToManyRecordNameToRecord;
    NSMutableArray *_writtenAssetURLs;
    PFCloudKitMetadataCache *_metadataCache;
}

@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (readonly, nonatomic) NSDictionary *manyToManyRecordNameToRecord;
@property (weak, nonatomic) NSObject<PFCloudKitSerializerDelegate> *delegate;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) NSArray *writtenAssetURLs;
@property (readonly, nonatomic) NSString *recordNamePrefix;

+ (id)generateCKAssetFileURLForObjectInStore:(id)a0;
+ (id)assetsOnRecord:(id)a0 withOptions:(id)a1;
+ (id)recordTypeForEntity:(id)a0;
+ (BOOL)shouldTrackAttribute:(id)a0;
+ (unsigned long long)estimatedByteSizeOfValue:(id)a0 andKey:(id)a1;
+ (id)mtmKeyForObjectWithRecordName:(id)a0 relatedToObjectWithRecordName:(id)a1 byRelationship:(id)a2 withInverse:(id)a3;
+ (BOOL)isPrivateAttribute:(id)a0;
+ (BOOL)isMirroredRelationshipRecordType:(id)a0;
+ (id)newArchivedDataForSystemFieldsOfRecord:(id)a0;
+ (unsigned long long)estimateByteSizeOfRecord:(id)a0;
+ (BOOL)shouldTrackRelationship:(id)a0;
+ (id)newSetOfRecordKeysForRelationship:(id)a0;
+ (BOOL)isVariableLengthAttributeType:(unsigned long long)a0;
+ (id)entityNameForRecordType:(id)a0;
+ (BOOL)shouldTrackProperty:(id)a0;
+ (id)newSetOfRecordKeysForEntitiesInConfiguration:(id)a0 inManagedObjectModel:(id)a1 includeCKAssetsForFileBackedFutures:(BOOL)a2;
+ (unsigned long long)estimateByteSizeOfRecordID:(id)a0;
+ (id)applyCDPrefixToName:(id)a0;
+ (id)assetStorageDirectoryURLForStore:(id)a0;
+ (id)newSetOfRecordKeysForAttribute:(id)a0 includeCKAssetsForFileBackedFutures:(BOOL)a1;
+ (unsigned long long)sizeOfVariableLengthAttribute:(id)a0 withValue:(id)a1;
+ (id)newSetOfRecordKeysForEntity:(id)a0 includeCKAssetsForFileBackedFutures:(BOOL)a1;
+ (id)ckAssetAttributeNameForAttributeName:(id)a0;

- (BOOL)applyUpdatedRecords:(id)a0 deletedRecordIDs:(id)a1 toStore:(id)a2 inManagedObjectContext:(id)a3 onlyUpdatingAttributes:(id)a4 andRelationships:(id)a5 error:(id *)a6;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithZone:(id)a0 mirroringOptions:(id)a1 metadataCache:(id)a2 recordNamePrefix:(id)a3;
- (id)newCKRecordsFromObject:(id)a0 fullyMaterializeRecords:(BOOL)a1 includeRelationships:(BOOL)a2 error:(id *)a3;
- (id)getRecordMetadataForObject:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)shouldEncryptValueForAttribute:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 usingEncryption:(BOOL)a2 onRecord:(id)a3;
- (id)getValueStoreForRecord:(id)a0;
- (id)getValueFromRecord:(id)a0 forKey:(id)a1 isEncrypted:(BOOL)a2;
- (void)updateAttributes:(id)a0 andRelationships:(id)a1 onManagedObject:(id)a2 fromRecord:(id)a3 withRecordMetadata:(id)a4 importContext:(id)a5;
- (void)addURLToWrittenAssetURLs:(id)a0;
- (void)setMtmRecord:(id)a0 toMtmRecordName:(id)a1;
- (id)newCKRecordsFromObject:(id)a0 fullyMaterializeRecords:(BOOL)a1 error:(id *)a2;
- (BOOL)applyUpdatedRecords:(id)a0 deletedRecordIDs:(id)a1 toStore:(id)a2 inManagedObjectContext:(id)a3 error:(id *)a4;

@end
