@class STWifiStatusDomainPublisher, NSString;

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable>

@property (readonly, nonatomic) STWifiStatusDomainPublisher *wifiDataPublisher;
@property (nonatomic, getter=isWifiActive) BOOL wifiActive;
@property (nonatomic, getter=isFallingBackToCellular) BOOL fallingBackToCellular;
@property (nonatomic) void *cellularFallbackWatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (void)_updateData;
- (void).cxx_destruct;
- (id)init;
- (void)_updateWifiActive;
- (void)invalidate;
- (void)dealloc;

@end
