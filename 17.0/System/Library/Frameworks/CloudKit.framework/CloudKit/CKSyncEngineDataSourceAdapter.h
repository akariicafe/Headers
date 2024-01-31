@class NSString;
@protocol CKSyncEngineDataSource;

@interface CKSyncEngineDataSourceAdapter : NSObject <CKSyncEngineDelegate, CKSyncEngineDelegatePrivate>

@property (weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)syncEngine:(id)a0 shouldFetchChangesForZoneID:(id)a1;
- (void)syncEngine:(id)a0 handleEvent:(id)a1;
- (id)syncEngine:(id)a0 nextRecordZoneChangeBatchForContext:(id)a1;
- (id)syncEngine:(id)a0 relatedApplicationBundleIdentifiersForZoneIDs:(id)a1 recordIDs:(id)a2;
- (BOOL)syncEngine:(id)a0 shouldFetchAssetContentsForZoneID:(id)a1;

@end
