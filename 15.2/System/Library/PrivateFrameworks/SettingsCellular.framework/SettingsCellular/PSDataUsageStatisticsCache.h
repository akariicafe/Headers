@class Logger, NSDictionary, CTDeviceDataUsage, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSDataUsageStatisticsCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct __CTServerConnection { } *_serverConnection;
    Logger *_logger;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) CTDeviceDataUsage *cachedDeviceDataUsage;
@property BOOL refreshInProgress;
@property (copy) id /* block */ refreshCompletionHandler;
@property (retain) NSDictionary *workspaceInfoDict;
@property (retain) NSDictionary *hotspotClientsUsage;
@property BOOL cacheNeedsRefresh;

+ (id)sharedInstance;

- (id)billingCycleEndDate;
- (void)willEnterForeground;
- (id)getLogger;
- (void)_clearCache;
- (id)appBundleIDs;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchDeviceDataUsageWithCompletion:(id /* block */)a0;
- (id)watchOnlyAppBundleIDsForPeriod:(unsigned long long)a0;
- (id)systemServiceBundleIDsForPeriod:(unsigned long long)a0;
- (id)uninstalledAppBundleIDsForPeriod:(unsigned long long)a0;
- (id)hotspotClientIDsForPeriod:(unsigned long long)a0;
- (id)usageForBundleID:(id)a0 inPeriod:(unsigned long long)a1;
- (BOOL)billingCycleSupported;
- (BOOL)useCalendarMonthBillingCycle;
- (id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)a0;
- (id)totalSystemServicesUsageForPeriod:(unsigned long long)a0;
- (id)totalUninstalledAppUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)a0;
- (id)wifiAssistUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalCellularUsageForPeriod:(unsigned long long)a0;
- (unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)a0;
- (void)_handleUsageOrInfoChanged;
- (void)fetchDeviceDataUsage;
- (void)refreshCacheIfNeeded;
- (void)fetchHotspotClientsUsage;
- (void)fetchWorkspaceInfo;
- (id)displayNameForAppBundleID:(id)a0;
- (id)totalAppUsageForPeriod:(unsigned long long)a0;
- (id)displayNameForWatchOnlyAppBundleID:(id)a0;
- (id)displayNameForSystemServiceBundleID:(id)a0;
- (id)displayNameForUninstalledAppBundleID:(id)a0;
- (id)displayNameForHotspotClientID:(id)a0;
- (unsigned long long)usageForHotspotClientID:(id)a0 inPeriod:(unsigned long long)a1;
- (id)previousBillingCycleEndDate;

@end
