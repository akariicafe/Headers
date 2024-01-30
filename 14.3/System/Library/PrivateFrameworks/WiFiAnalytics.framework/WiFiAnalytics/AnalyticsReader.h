@class AnalyticsStoreMOHandler;

@interface AnalyticsReader : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;

- (id)init;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (void).cxx_destruct;
- (long long)autoLeaveRssiForBss:(id)a0 ssid:(id)a1;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;

@end
