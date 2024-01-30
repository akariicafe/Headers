@class NSString, NSCKRecordZoneMetadata, NSData, NSSet, NSNumber;

@interface NSCKRecordMetadata : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSData *encodedRecord;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSData *ckShare;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic) BOOL needsUpload;
@property (nonatomic) BOOL needsLocalDelete;
@property (nonatomic) BOOL needsCloudDelete;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;
@property (retain, nonatomic) NSSet *moveReceipts;

+ (id)recordFromEncodedData:(id)a0 error:(id *)a1;
+ (id)encodeRecord:(id)a0 error:(id *)a1;
+ (id)insertMetadataForObject:(id)a0 setRecordName:(BOOL)a1 inZoneWithID:(id)a2 recordNamePrefix:(id)a3 error:(id *)a4;

- (id)createEncodedMoveReceiptData:(id *)a0;
- (id)createRecordFromSystemFields;
- (BOOL)mergeMoveReceiptsWithData:(id)a0 error:(id *)a1;

@end
