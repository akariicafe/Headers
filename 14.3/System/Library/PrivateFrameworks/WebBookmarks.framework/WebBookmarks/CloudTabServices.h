@interface CloudTabServices : NSObject

+ (void)didToggleCloudTabs:(BOOL)a0 terminateAfterUpdating:(BOOL)a1;
+ (void)clearAllCloudTabDevices;
+ (void)clearTabsForCurrentDevice;
+ (void)didToggleCloudTabs:(BOOL)a0;
+ (id)_serverConnection;

@end
