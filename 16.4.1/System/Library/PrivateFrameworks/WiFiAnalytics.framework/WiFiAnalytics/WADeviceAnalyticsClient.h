@class AnalyticsStoreMOHandler, AnalyticsReader, NSObject, AnalyticsStoreFileWriter;
@protocol OS_dispatch_queue;

@interface WADeviceAnalyticsClient : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AnalyticsReader *analyticsReader;
@property (retain, nonatomic) AnalyticsStoreFileWriter *analyticsFileWriter;

- (id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)a0 distance:(double)a1 band:(unsigned int)a2;
- (long long)autoLeaveRssiForBSS:(id)a0 ssid:(id)a1;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (id)copyGeoTagsForNetwork:(id)a0 location:(id)a1;
- (id)copyColocatedScopeIdForSsid:(id)a0;
- (BOOL)isMovingNetwork:(id)a0;
- (id)copyPreferenceScoreDictionaryForNetwork:(id)a0;
- (BOOL)isHistoricallyBadLinkQualityNetwork:(id)a0;
- (id)copyAllStoredNetworkSsidsWithTrait:(unsigned long long)a0;
- (unsigned long long)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2;
- (id)copyLocationsForNetwork:(id)a0;
- (id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)a0;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (id)copyColocatedScopeTransitionInfo:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)a0 distance:(double)a1 authComparator:(id /* block */)a2;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;
- (void)dealloc;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0 fetchLimit:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)a0;
- (id)init;
- (BOOL)dumpDeploymentGraphJSONFileWithCompletion:(id /* block */)a0;
- (BOOL)dumpDeviceAnalyticsUsingBatchSizeToFileWithCompletion:(id /* block */)a0 batchSize:(unsigned long long)a1 maxAge:(unsigned long long)a2;
- (id)copyNetworkUsageDictionary:(id)a0;
- (BOOL)isOmnipresentNetwork:(id)a0;
- (void).cxx_destruct;
- (id)copyNetworksUsageDictionaryForMostUsedNetworks:(unsigned long long)a0 ascending:(BOOL)a1;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;
- (id)copyAllStoredNetworkSsids;

@end
