@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (BOOL)airplaneMode;
+ (void)setAirplaneMode:(BOOL)a0;
+ (id)SSID;
+ (void)setSSID:(id)a0;
+ (BOOL)onWifi;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;

@end
