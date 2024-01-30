@class NSData, CKRecordID, CKRecord;

@interface BRCFetchSubResourceRecord : NSObject

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) long long recordType;
@property (retain, nonatomic) NSData *xattrSignature;
@property (retain, nonatomic) CKRecordID *recordIDNeedingFetch;
@property (retain, nonatomic) CKRecordID *recordIDBlockingSave;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChangedRecord:(id)a0 shareID:(id)a1 xattrSignatureNeedingFetch:(id)a2 structureRecordBlockingSave:(id)a3;
- (id)initWithRecordIDNeedingFetch:(id)a0 recordType:(long long)a1;
- (BOOL)isWaitingOnShareIDFetch;
- (long long)resolveRecordType;

@end
