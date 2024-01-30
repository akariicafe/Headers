@class NSUUID, NSString, NSArray, NSData, HDCloudSyncCodableSharedSummaryTransactionRecord;

@interface HDCloudSyncSharedSummaryTransactionRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryTransactionRecord *_underlyingTransactionRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier;
@property (readonly, copy, nonatomic) NSArray *summaryIdentifiers;
@property (readonly, copy, nonatomic) NSData *metadata;

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isTransactionRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 UUID:(id)a1 sourceDeviceIdentifier:(id)a2 summaryIdentifiers:(id)a3 metadata:(id)a4;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
