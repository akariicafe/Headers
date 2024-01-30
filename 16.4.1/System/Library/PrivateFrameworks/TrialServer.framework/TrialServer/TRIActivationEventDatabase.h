@class TRIDatabase;

@interface TRIActivationEventDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (id)activationEventRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;
- (struct { unsigned long long x0; })deleteRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;
- (id)init;
- (struct { unsigned long long x0; })addRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5 carrierBundleId:(id)a6 carrierCountryCode:(id)a7 diagnosticsUsageEnabled:(BOOL)a8 hasAne:(BOOL)a9 aneVersion:(id)a10 transaction:(id)a11;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;

@end
