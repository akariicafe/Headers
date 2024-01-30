@interface CloudTabServices : NSObject

+ (void)clearTabsForCurrentDevice;
+ (id)_serverConnection;
+ (void)didToggleCloudTabs:(BOOL)a0 terminateAfterUpdating:(BOOL)a1;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:(BOOL)a0;

@end
