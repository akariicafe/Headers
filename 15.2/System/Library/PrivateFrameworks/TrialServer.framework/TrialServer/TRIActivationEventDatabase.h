@class TRIDatabase;

@interface TRIActivationEventDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (struct { unsigned long long x0; })addRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5 transaction:(id)a6;
- (id)activationEventRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;
- (struct { unsigned long long x0; })deleteRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;

@end
