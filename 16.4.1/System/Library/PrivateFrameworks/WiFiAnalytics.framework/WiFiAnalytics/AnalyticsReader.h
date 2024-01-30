@class NSManagedObjectContext, AnalyticsStoreMOHandler;

@interface AnalyticsReader : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (readonly, nonatomic) NSManagedObjectContext *backgroundReadingMOC;

- (id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)a0 distance:(double)a1 band:(unsigned int)a2;
- (long long)autoLeaveRssiForBss:(id)a0 ssid:(id)a1;
- (id)_copyNetworkUsageDictionaryWithMOC:(id)a0 moc:(id)a1;
- (id)neighborsForBSS:(id)a0 ssid:(id)a1;
- (id)copyGeoTagsForNetwork:(id)a0 location:(id)a1;
- (id)copyColocatedScopeIdForSsid:(id)a0;
- (BOOL)isMovingNetwork:(id)a0;
- (id)copyPreferenceScoreDictionaryForNetwork:(id)a0;
- (BOOL)isHistoricallyBadLinkQualityNetwork:(id)a0;
- (id)copyAllStoredNetworkSsidsWithTrait:(unsigned long long)a0;
- (BOOL)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2 count:(unsigned long long *)a3;
- (id)initWithAnalyticsStore:(id)a0;
- (id)copyLocationsForNetwork:(id)a0;
- (id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)a0;
- (unsigned long long)manualLeaveCountForBss:(id)a0 ssid:(id)a1;
- (id)copyColocatedScopeTransitionInfo:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4;
- (BOOL)parsedBeaconInfoIsStored:(id)a0 ssid:(id)a1;
- (id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)a0 distance:(double)a1 authComparator:(id /* block */)a2;
- (id)neighborChannelsForBSS:(id)a0 ssid:(id)a1;
- (id)copyNetworkUsageDictionary:(id)a0;
- (BOOL)isOmnipresentNetwork:(id)a0;
- (void).cxx_destruct;
- (id)copyNetworksUsageDictionaryForMostUsedNetworks:(unsigned long long)a0 ascending:(BOOL)a1;
- (long long)rssiRoamTriggerForBSS:(id)a0 ssid:(id)a1;
- (id)copyAllStoredNetworkSsids;

@end
