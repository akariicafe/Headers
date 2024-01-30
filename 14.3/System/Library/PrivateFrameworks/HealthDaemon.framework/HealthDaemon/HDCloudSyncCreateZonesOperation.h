@class CKContainer, NSArray;

@interface HDCloudSyncCreateZonesOperation : HDCloudSyncOperation {
    CKContainer *_container;
    NSArray *_zones;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 zones:(id)a2 container:(id)a3;

@end
