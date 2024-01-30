@class HDCloudSyncTarget, HDCloudSyncStore;

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncStore *_store;
}

@property (readonly, nonatomic) HDCloudSyncTarget *pushTarget;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 store:(id)a2;
- (void)_finishWithZone:(id)a0;
- (void)_createZoneWithIdentifier:(id)a0;

@end
