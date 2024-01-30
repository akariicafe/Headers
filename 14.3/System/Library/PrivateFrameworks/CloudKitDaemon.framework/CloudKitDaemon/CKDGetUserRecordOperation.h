@class CKRecord;

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;

@end
