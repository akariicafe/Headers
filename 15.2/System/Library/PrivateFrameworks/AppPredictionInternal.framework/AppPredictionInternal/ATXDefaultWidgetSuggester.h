@class _ATXAppLaunchHistogramManager;

@interface ATXDefaultWidgetSuggester : NSObject {
    _ATXAppLaunchHistogramManager *_histogramManager;
}

- (void).cxx_destruct;
- (double)appLaunchCountForTVApp;
- (double)intentDonationCountForTVApp;
- (double)upcomingMediaCountForTVApp;
- (double)_appLaunchCountForAppBudleId:(id)a0;
- (double)_intentDonationCountForActionKey:(id)a0;
- (double)_upcomingMediaCountForAppBundleId:(id)a0 isInternalApplication:(BOOL)a1;
- (id)initWithHistogramManager:(id)a0;
- (BOOL)shouldSuggestTV;

@end
