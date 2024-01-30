@class NSMutableDictionary, DMFWebsitePolicyMonitor;
@protocol WBSDigitalHealthManagerDelegate;

@interface WBSDigitalHealthManager : NSObject {
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsToUsageState;
}

@property (weak, nonatomic) id<WBSDigitalHealthManagerDelegate> delegate;

+ (void)_updateWebpageUsage:(id)a0 withDigitalHealthManagerUsageState:(unsigned long long)a1;
+ (void)deleteAllUsageHistory;
+ (void)deleteUsageHistoryForURLs:(id)a0;
+ (void)deleteUsageHistoryFromDate:(id)a0 toDate:(id)a1;

- (void)getOverlayStateForURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)stopObserving;
- (void)startObserving;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)stopUsageTrackingForURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_historyWasCleared:(id)a0;
- (void)dealloc;
- (void)updateUsageTrackingForURL:(id)a0 withBundleIdentifier:(id)a1 toState:(unsigned long long)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
