@class ATXInstalledSuggestedPagesTracker, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXSuggestedPagesClient : NSObject <ATXSuggestedPagesInterface> {
    NSXPCConnection *_xpcConnection;
    ATXInstalledSuggestedPagesTracker *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) BOOL shouldShowInternalFeedbackUI;

+ (id)tapToRadarURLForModeName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)suggestedPagesWithFilter:(id)a0 layoutOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)_createInstalledPagesTrackerIfNeeded;
- (BOOL)allowsSuggestionsForModeUUID:(id)a0;
- (struct CGImage { } *)cachedSnapshotForSuggestedPageWithIdentifier:(id)a0;
- (void)didAddAppsWithBundleIds:(id)a0 suggestedPage:(id)a1;
- (void)didInstallSuggestedPage:(id)a0;
- (void)didRemoveAppsWithBundleIds:(id)a0 suggestedPage:(id)a1;
- (void)sendModificationMetricsToCoreAnalyticsWithBundleIds:(id)a0 suggestedPage:(id)a1 isAdded:(BOOL)a2;

@end
