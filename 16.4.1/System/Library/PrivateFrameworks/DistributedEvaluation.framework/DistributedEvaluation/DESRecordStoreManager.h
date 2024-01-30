@class NSObject, DESDeviceIdentifierStore, DESRecordStorePolicyManager;
@protocol OS_dispatch_queue;

@interface DESRecordStoreManager : NSObject {
    DESRecordStorePolicyManager *_policyManager;
    NSObject<OS_dispatch_queue> *_queue;
    DESDeviceIdentifierStore *_identifierStore;
}

- (void)fetchNativeRecordDataForRecordUUID:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllSavedRecordsForBundleId:(id)a0 completion:(id /* block */)a1;
- (id)saveRecordToDirPath:(id)a0 data:(id)a1 recordInfo:(id)a2 error:(id *)a3;
- (void)saveCoreDuetEvent:(id)a0 completion:(id /* block */)a1;
- (void)saveRecordForBundleId:(id)a0 data:(id)a1 recordInfo:(id)a2 completion:(id /* block */)a3;
- (void)deleteSavedRecordForBundleId:(id)a0 identfier:(id)a1 completion:(id /* block */)a2;
- (id)fetchRecordSetSynchronouslyForBundleId:(id)a0 error:(id *)a1;
- (void)fetchCoreDuetEventsForBundleId:(id)a0 completion:(id /* block */)a1;
- (id)recordDirURLsForBundleId:(id)a0;
- (id)init;
- (void)fetchSavedRecordInfoForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecordSetForBundleId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchSavedRecordInfoForRecordType:(id)a0 completion:(id /* block */)a1;

@end
