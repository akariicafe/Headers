@class NSString;

@interface HDCloudSyncFilterZonesOperation : HDCloudSyncOperation {
    NSString *_syncCircleIdentifier;
    NSString *_zoneOwner;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 zoneOwner:(id)a2;

@end
