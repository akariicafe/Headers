@class NSDate;

@interface MapsSync.MapsSyncCloudKitStateProvider : NSObject {
    void /* unknown type, empty encoding */ lastSyncDate;
    void /* unknown type, empty encoding */ lastPersistedSyncDate;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ lastSyncError;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, copy) NSDate *lastPersistedSyncDate;

- (id)init;
- (void).cxx_destruct;
- (void)consumeCloudKitEventWithEvent:(id)a0;
- (void)handleSuccessfulCKEventWithDate:(id)a0;

@end
