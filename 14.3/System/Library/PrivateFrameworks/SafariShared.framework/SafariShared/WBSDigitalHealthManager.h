@class NSMutableDictionary, DMFWebsitePolicyMonitor;
@protocol WBSDigitalHealthManagerDelegate;

@interface WBSDigitalHealthManager : NSObject {
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsToUsageState;
}

@property (weak, nonatomic) id<WBSDigitalHealthManagerDelegate> delegate;

+ (void)_updateWebpageUsage:(id)a0 withDigitalHealthManagerUsageState:(unsigned long long)a1;
+ (void)deleteUsageHistoryForURLs:(id)a0;
+ (void)deleteAllUsageHistory;
+ (void)deleteUsageHistoryFromDate:(id)a0 toDate:(id)a1;

- (void)stopObserving;
- (id)init;
- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (void)_historyWasCleared:(id)a0;
- (void)dealloc;
- (void)startObserving;
- (void)_requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateUsageTrackingForURL:(id)a0 withBundleIdentifier:(id)a1 toState:(unsigned long long)a2;
- (void)stopUsageTrackingForURL:(id)a0;
- (void)getOverlayStateForURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
