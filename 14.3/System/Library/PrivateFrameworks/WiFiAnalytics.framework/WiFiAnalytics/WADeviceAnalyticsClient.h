@class AnalyticsReader, NSObject;
@protocol OS_dispatch_queue;

@interface WADeviceAnalyticsClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AnalyticsReader *analyticsReader;

- (id)init;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)autoLeaveRssiForBSS:(id)a0 ssid:(id)a1;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0 fetchLimit:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;

@end
