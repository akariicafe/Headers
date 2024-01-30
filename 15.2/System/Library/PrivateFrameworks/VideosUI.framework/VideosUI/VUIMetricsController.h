@class NSHashTable, NSString, MTMetricsKit, VUIMetricsPageEventData, MTPerfKit, NSDictionary, NSObject, NSMutableArray;
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
@property (retain, nonatomic) MTMetricsKit *activeMetricsKit;
@property (retain, nonatomic) MTMetricsKit *metricsKitMain;
@property (retain, nonatomic) MTMetricsKit *loggerKit;
@property (retain, nonatomic) MTMetricsKit *metricsKitUnidentified;
@property (retain, nonatomic) MTPerfKit *perfMetricsKit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsDataDispatchSQ;
@property (retain, nonatomic) VUIMetricsPageEventData *gdprCachedPageEvent;
@property (retain, nonatomic) NSDictionary *cachedEnterEvent;
@property (retain, nonatomic) NSMutableArray *cachedGroupEvents;
@property (retain, nonatomic) NSHashTable *savedRecentEvents;
@property (retain, nonatomic) NSString *lastEventType;
@property (retain, nonatomic) NSDictionary *lastEventData;
@property (retain, nonatomic) NSString *lastTabIdentifier;
@property (nonatomic) BOOL shouldPostAppLaunchData;
@property (nonatomic) BOOL isInDebugMode;
@property (retain, nonatomic) NSDictionary *cachedOpenUrlData;
@property (readonly, copy, nonatomic) NSString *currentTabIdentifier;
@property (retain, nonatomic) VUIMetricsPageEventData *lastRecordedPageEventData;
@property (nonatomic) BOOL shouldFlushMetrics;
@property (retain, nonatomic) NSString *exitEventDestinationUrl;

+ (id)sharedInstance;
+ (id)_baseToVPAFMapping;

- (void).cxx_destruct;
- (id)init;
- (void)recordMedia:(id)a0;
- (void)recordClick:(id)a0;
- (void)recordPage:(id)a0;
- (id)iTunesLibraryPlaybackMediaMetricsForAdamID:(id)a0 mediaType:(id)a1;
- (void)recordImpressions:(id)a0;
- (id)getMetricsEnhancedBuyParams:(id)a0;
- (void)recordLog:(id)a0;
- (void)forceGDPRConsentStatus:(BOOL)a0;
- (void)recordDialog:(id)a0;
- (void)_handleServerConfigChange:(id)a0;
- (id)getMetricsOverlayForBundleOffer;
- (void)setupMetricsController;
- (id)_createMetricsKitForTopic:(id)a0;
- (id)_createPerfKit;
- (void)_initializeBaseFields;
- (void)registerForBaseFieldChanges;
- (void)_recordEnter:(id)a0;
- (void)_recordEvent:(id)a0 withEventData:(id)a1;
- (void)_recordExit:(id)a0;
- (id)createEventTime;
- (id)_createDataAddingBaseAndPageFieldsToEventData:(id)a0;
- (void)_saveRecentEvents:(id)a0;
- (void)_flushMetrics;
- (id)_getLocationAuthorizationStatus;
- (void)_handleTabBarChange:(id)a0;
- (void)_handleWLKSettingsDidChange:(id)a0;
- (void)_handleWLKAppLibChange:(id)a0;
- (void)_handleWLKLocationManagerChange:(id)a0;
- (void)_handleGroupActivitiesSessionStateChange:(id)a0;
- (void)_setGDPRConsentStatus:(BOOL)a0;
- (void)_updateBaseFieldsWithData:(id)a0;
- (void)_flushUnreportedEvents:(id)a0;
- (void)_removeBaseFieldsForKeys:(id)a0;
- (id)_getCurrentMetricsTopic;
- (void)recordAppLaunched;
- (void)recordAppBecameActive;
- (void)recordOpenUrlLaunchWithExtURL:(id)a0 andOptions:(id)a1;
- (void)recordAppWillTerminate;
- (void)recordAppWillBackground;
- (void)recordSearch:(id)a0;
- (void)recordRawEvent:(id)a0;
- (void)recordPerfEvent:(id)a0;
- (void)jsDelegateRecordLogEvent:(id)a0;
- (void)updateGDPRConsentStatus;
- (void)flushMetrics;
- (id)getRecentEventsForDebuggerUI;

@end
