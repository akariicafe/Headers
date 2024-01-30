@class NSData, CKRecordID, CKRecord;

@interface HDCloudSyncRecord : NSObject {
    CKRecord *_record;
}

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) NSData *underlyingMessage;
@property (readonly, nonatomic) long long schemaVersion;
@property (nonatomic) BOOL repaired;
@property (readonly, nonatomic) BOOL unsaved;

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;

- (BOOL)validateWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)serializeUnderlyingMessage;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;

@end
