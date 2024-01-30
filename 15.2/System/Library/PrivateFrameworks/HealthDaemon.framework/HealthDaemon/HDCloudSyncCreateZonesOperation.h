@class CKContainer, NSArray;

@interface HDCloudSyncCreateZonesOperation : HDCloudSyncOperation {
    CKContainer *_container;
    NSArray *_zones;
}

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 zones:(id)a2 container:(id)a3;
- (void)main;
- (void).cxx_destruct;

@end
