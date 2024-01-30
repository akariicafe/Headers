@class NSString;

@interface HDCloudSyncFilterZonesOperation : HDCloudSyncOperation {
    NSString *_syncCircleIdentifier;
    NSString *_zoneOwner;
}

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 zoneOwner:(id)a2;

@end
