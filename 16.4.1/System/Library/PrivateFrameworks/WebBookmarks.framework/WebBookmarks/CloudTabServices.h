@interface CloudTabServices : NSObject

+ (void)clearTabsForCurrentDevice;
+ (id)_serverConnection;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:(BOOL)a0;
+ (void)didToggleCloudTabs:(BOOL)a0 terminateAfterUpdating:(BOOL)a1;

@end
