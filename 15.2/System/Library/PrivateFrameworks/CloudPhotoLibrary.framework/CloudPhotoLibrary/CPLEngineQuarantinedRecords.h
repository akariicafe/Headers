@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {
    NSMutableArray *_quarantineMessages;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeTransactionDidSucceed;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (unsigned long long)countOfQuarantinedRecords;
- (BOOL)removeQuarantinedRecordWithScopedIdentifier:(id)a0 notify:(BOOL)a1 error:(id *)a2;
- (BOOL)resetRejectedRecordsWithError:(id *)a0;
- (BOOL)_quarantineRejectedRecords:(id)a0 error:(id *)a1;
- (BOOL)bumpRejectedRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)addQuarantinedRecordWithScopedIdentifier:(id)a0 recordClass:(Class)a1 reason:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)a0;
- (BOOL)isRecordWithScopedIdentifierQuarantined:(id)a0;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)a0 reason:(id)a1;
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)a0;

@end
