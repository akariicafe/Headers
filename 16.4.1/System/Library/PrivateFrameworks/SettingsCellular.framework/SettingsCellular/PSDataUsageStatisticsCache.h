@class NSDictionary, CoreTelephonyClient, CTDeviceDataUsage;

@interface PSDataUsageStatisticsCache : NSObject {
    struct __CTServerConnection { } *_serverConnection;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) CTDeviceDataUsage *cachedDeviceDataUsage;
@property BOOL refreshInProgress;
@property (copy) id /* block */ refreshCompletionHandler;
@property (retain) NSDictionary *workspaceInfoDict;
@property (retain) NSDictionary *hotspotClientsUsage;
@property BOOL cacheNeedsRefresh;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (id)getLogger;
- (id)initPrivate;
- (void)dealloc;
- (id)appBundleIDs;
- (id)init;
- (void).cxx_destruct;
- (id)billingCycleEndDate;
- (void)_clearCache;
- (id)watchOnlyAppBundleIDsForPeriod:(unsigned long long)a0;
- (BOOL)billingCycleSupported;
- (void)fetchDeviceDataUsageWithCompletion:(id /* block */)a0;
- (id)hotspotClientIDsForPeriod:(unsigned long long)a0;
- (id)systemServiceBundleIDsForPeriod:(unsigned long long)a0;
- (unsigned long long)totalCellularUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)a0;
- (id)totalSystemServicesUsageForPeriod:(unsigned long long)a0;
- (id)totalUninstalledAppUsageForPeriod:(unsigned long long)a0;
- (id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)a0;
- (id)uninstalledAppBundleIDsForPeriod:(unsigned long long)a0;
- (id)usageForBundleID:(id)a0 inPeriod:(unsigned long long)a1;
- (BOOL)useCalendarMonthBillingCycle;
- (id)wifiAssistUsageForPeriod:(unsigned long long)a0;
- (void)_handleUsageOrInfoChanged;
- (id)displayNameForAppBundleID:(id)a0;
- (id)displayNameForHotspotClientID:(id)a0;
- (id)displayNameForSystemServiceBundleID:(id)a0;
- (id)displayNameForUninstalledAppBundleID:(id)a0;
- (id)displayNameForWatchOnlyAppBundleID:(id)a0;
- (void)fetchDeviceDataUsage;
- (void)fetchHotspotClientsUsage;
- (void)fetchWorkspaceInfo;
- (id)previousBillingCycleEndDate;
- (void)refreshCacheIfNeeded;
- (id)totalAppUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)usageForHotspotClientID:(id)a0 inPeriod:(unsigned long long)a1;

@end
