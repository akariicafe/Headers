@class CKRecordID, CKRecord;

@interface HMBCloudZoneRecordPushConflict : HMFObject

@property (readonly) CKRecordID *recordID;
@property (readonly) CKRecord *clientRecord;
@property (readonly) CKRecord *serverRecord;
@property (readonly) CKRecord *ancestorRecord;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0 clientRecord:(id)a1 serverRecord:(id)a2 ancestorRecord:(id)a3;
- (id)initWithRecordID:(id)a0 error:(id)a1;

@end
