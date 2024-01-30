@class NSObject;
@protocol OS_dispatch_queue;

@interface RecordStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)fetchSavedRecordInfoForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecordSetForBundleId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
