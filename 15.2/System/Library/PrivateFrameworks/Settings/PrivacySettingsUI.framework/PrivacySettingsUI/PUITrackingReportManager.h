@class AnalyticsWorkspace, NSDictionary, NSArray, UsageFeed, NSDate;

@interface PUITrackingReportManager : NSObject

@property (retain, nonatomic) UsageFeed *feed;
@property (retain, nonatomic) AnalyticsWorkspace *workspace;
@property (retain, nonatomic) NSDictionary *appsToTrackers;
@property (retain, nonatomic) NSDictionary *trackersToApps;
@property (retain, nonatomic) NSDictionary *appsToTrackersInAppOnly;
@property (retain, nonatomic) NSDictionary *trackersToAppsInAppOnly;
@property (retain, nonatomic) NSDictionary *appsToWebsitesToTrackers;
@property (retain, nonatomic) NSDictionary *trackersToWebsitesToTrackers;
@property (retain, nonatomic) NSArray *allEntries;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)queryWithOptions:(id)a0 reply:(id /* block */)a1;

- (id)entries;
- (id)allData;
- (void).cxx_destruct;
- (id)init;
- (void)reloadWithCompletion:(id /* block */)a0;
- (void)dataDidChange;
- (BOOL)trackingReportEnabled;
- (void)reloadDataWithCompletion:(id /* block */)a0;
- (void)reloadEnabledWithCompletion:(id /* block */)a0;
- (id)enabledDate;
- (BOOL)hadDataInLastQuery;
- (void)setTrackingReportEnabled:(BOOL)a0;
- (void)exportToStream:(id)a0 error:(id *)a1;
- (id)appsToTrackersWithoutHiddenApps:(id)a0;
- (id)appsToTrackersInAppOnlyFromAppsToTrackers:(id)a0;
- (id)trackersToAppsDictFromAppsToTrackersDict:(id)a0;
- (id)appsToWebsitesDictFromAppsToTrackersDict:(id)a0;
- (id)trackersToWebsitesDictFromAppsToTrackersDict:(id)a0;
- (id)allEntriesFromAppsToTrackers:(id)a0;
- (BOOL)shouldIncludeBundleID:(id)a0;
- (id)entries:(id)a0 filtered:(id /* block */)a1;
- (id)entriesFiltered:(id /* block */)a0;
- (id)valuesAndCountsForKey:(id)a0 entries:(id)a1;
- (id)valuesForKey:(id)a0 withLargestValueForKey:(id)a1 entries:(id)a2;
- (long long)highestNumberOfTrackerDataPerAppInAppOnly:(BOOL)a0;
- (long long)highestNumberOfTrackerDataPerTrackerInAppOnly:(BOOL)a0;
- (id)appsIDsContactingTrackersInAppOnly:(BOOL)a0;
- (id)trackerDataForAppID:(id)a0 inAppOnly:(BOOL)a1;
- (id)trackerDomainsInAppOnly:(BOOL)a0;
- (id)trackerDataForTrackerDomain:(id)a0 inAppOnly:(BOOL)a1;
- (id)websiteDomainsForAppID:(id)a0;
- (id)trackerDataForAppID:(id)a0 websiteDomain:(id)a1;
- (id)websiteDomainsForTrackerDomain:(id)a0;
- (id)trackerDataForTrackerDomain:(id)a0 websiteDomain:(id)a1;

@end
