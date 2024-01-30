@class VUIMetricsLocalRecorder, NSString, NSDictionary, VUIMetricsPageEventData, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VUIMetricsController : NSObject {
    BOOL _isInternalBuild;
    BOOL _isAppJustLaunched;
    BOOL _isAppJustDeepLinkOpened;
    BOOL _isGDPRConsented;
}

@property (readonly, copy, nonatomic) NSDictionary *baseFieldsForVPAF;
@property (readonly, copy, nonatomic) NSDictionary *iTunesVPAF;
@property (copy, nonatomic) NSDictionary *baseFields;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsDataDispatchSQ;
@property (retain, nonatomic) VUIMetricsPageEventData *gdprCachedPageEvent;
@property (retain, nonatomic) NSDictionary *cachedEnterEvent;
@property (retain, nonatomic) NSMutableArray *cachedGroupEvents;
@property (retain, nonatomic) NSHashTable *savedRecentEvents;
@property (retain, nonatomic) NSString *lastEventType;
@property (retain, nonatomic) NSDictionary *lastEventData;
@property (retain, nonatomic) NSString *lastTabIdentifier;
@property (retain, nonatomic) VUIMetricsLocalRecorder *localMetricsRecorder;
@property (retain, nonatomic) NSMutableArray *cachedUnifiedMessagingImpressions;
@property (nonatomic) BOOL shouldPostAppLaunchData;
@property (nonatomic) BOOL isInDebugMode;
@property (retain, nonatomic) NSDictionary *cachedOpenUrlData;
@property (readonly, copy, nonatomic) NSString *currentTabIdentifier;
@property (retain, nonatomic) VUIMetricsPageEventData *lastRecordedPageEventData;
@property (nonatomic) BOOL shouldFlushMetrics;
@property (readonly, nonatomic) BOOL perfEventPublishingEnabled;
@property (retain, nonatomic) NSString *exitEventDestinationUrl;

+ (id)sharedInstance;
+ (id)_baseToVPAFMapping;

- (id)init;
- (void).cxx_destruct;
- (void)flushMetrics;
- (BOOL)_isSiri;
- (id)_getLocationAuthorizationStatus;
- (id)getMetricsOverlayForBundleOffer;
- (id)createEventTime;
- (void)recordRawEvent:(id)a0;
- (id)_createDataAddingBaseAndPageFieldsToEventData:(id)a0 forEventType:(id)a1;
- (id)_getCurrentMetricsTopic;
- (void)_handleGroupActivitiesSessionStateChange:(id)a0;
- (void)_handleServerConfigChange:(id)a0;
- (void)_handleTabBarChange:(id)a0;
- (void)_handleWLKAppLibChange:(id)a0;
- (void)_handleWLKLocationManagerChange:(id)a0;
- (void)_handleWLKSettingsDidChange:(id)a0;
- (void)_initializeBaseFields;
- (id)_processPageFields:(id)a0 forEventType:(id)a1;
- (void)_recordEnter:(id)a0;
- (void)_recordEvent:(id)a0 withEventData:(id)a1;
- (void)_recordEventWithJet:(id)a0 withEventData:(id)a1;
- (void)_recordExit:(id)a0;
- (void)_removeBaseFieldsForKeys:(id)a0;
- (void)_saveRecentEvents:(id)a0;
- (void)_setGDPRConsentStatus:(BOOL)a0;
- (void)_updateBaseFieldsWithData:(id)a0;
- (void)cacheUMImpression:(id)a0;
- (void)forceGDPRConsentStatus:(BOOL)a0;
- (id)getBasePerfData:(BOOL)a0;
- (id)getMetricsEnhancedBuyParams:(id)a0;
- (id)getMetricsOverlayForWebContainer;
- (id)getRecentEventsForDebuggerUI;
- (id)iTunesLibraryPlaybackMediaMetricsForAdamID:(id)a0 mediaType:(id)a1;
- (void)recordAppBecameActive;
- (void)recordAppLaunched;
- (void)recordAppWillBackground;
- (void)recordAppWillTerminate;
- (void)recordClick:(id)a0;
- (void)recordDialog:(id)a0;
- (void)recordImpressions:(id)a0;
- (void)recordLog:(id)a0;
- (void)recordMedia:(id)a0;
- (void)recordOpenUrlLaunchWithExtURL:(id)a0 andOptions:(id)a1;
- (void)recordPage:(id)a0;
- (void)recordPerfEvent:(id)a0;
- (void)recordSearch:(id)a0;
- (void)registerForBaseFieldChanges;
- (void)setupMetricsController;
- (void)updateGDPRConsentStatus;

@end
