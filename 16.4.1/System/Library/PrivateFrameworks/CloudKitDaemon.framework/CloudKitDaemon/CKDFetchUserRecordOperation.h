@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (int)operationType;
- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
