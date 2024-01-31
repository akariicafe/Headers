@class NSString;
@protocol CKSyncEngineDelegate;

@interface CKSyncEngineAsyncDelegateAdapter : NSObject <CKSyncEngineAsyncDelegate>

@property (weak, nonatomic) id<CKSyncEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)syncEngine:(id)a0 nextFetchChangesOptionsForContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncEngine:(id)a0 handleEvent:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncEngine:(id)a0 nextRecordZoneChangeBatchForContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncEngine:(id)a0 relatedApplicationBundleIdentifiersForZoneIDs:(id)a1 recordIDs:(id)a2 completionHandler:(id /* block */)a3;

@end
