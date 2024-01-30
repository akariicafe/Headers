@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;

@end
