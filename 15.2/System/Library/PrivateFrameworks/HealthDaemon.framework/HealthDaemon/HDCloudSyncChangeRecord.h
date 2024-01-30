@class HDSyncAnchorRangeMap, CKRecordID, HDCloudSyncCodableChange, NSURL, NSNumber;

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {
    HDCloudSyncCodableChange *_underlyingChange;
}

@property (readonly, copy, nonatomic) NSURL *changesetArchiveFileURL;
@property (readonly, nonatomic) long long changeIndex;
@property (readonly, nonatomic) int protocolVersion;
@property (readonly, nonatomic) BOOL finalForSequence;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (readonly, copy, nonatomic) NSNumber *changeSize;
@property (readonly, copy, nonatomic) CKRecordID *sequenceRecordID;

+ (BOOL)isChangeRecordID:(id)a0;
+ (id)changesetArchiveURLForCKRecord:(id)a0 error:(id *)a1;
+ (long long)bytesPerChangeRecordAssetThreshold;
+ (id)changesetArchiveContentDataForCKRecord:(id)a0 error:(id *)a1;
+ (id)nonAssetKeys;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (long long)bytesPerChangeRecordAssetThresholdHardLimit;
+ (id)fieldsForUnprotectedSerialization;
+ (id)assetKeys;
+ (BOOL)isChangeRecord:(id)a0;
+ (id)recordType;
+ (BOOL)isChangeRecord:(id)a0 inSequence:(id)a1;
+ (BOOL)hasFutureSchema:(id)a0;

- (BOOL)shouldFetchAssetContentInMemory;
- (long long)compare:(id)a0;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initWithSyncAnchorRangeMap:(id)a0 changeIndex:(long long)a1 changesetAsset:(id)a2 changeSize:(long long)a3 protocolVersion:(int)a4 finalForSequence:(BOOL)a5 sequenceRecordID:(id)a6 record:(id)a7 schemaVersion:(long long)a8;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)initWithSyncAnchorRangeMap:(id)a0 finalForSequence:(BOOL)a1 changesetArchiveFileHandle:(id)a2 sequenceRecord:(id)a3 protocolVersion:(int)a4;
- (id)serializeUnderlyingMessage;

@end
