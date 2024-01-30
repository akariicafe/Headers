@class NSNumber, NSString, MPAVItem, MPRTCReportingSessionSummaryEvent, NSMutableDictionary, MPQueueFeeder, MPAVController;

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver> {
    long long _currentInterfaceType;
    MPAVItem *_currentItem;
    BOOL _isReloadingWithPlaybackContext;
    MPQueueFeeder *_pendingFailureQueueFeeder;
    NSNumber *_tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent *_tracklistSummaryEvent;
    NSMutableDictionary *_uniqueIdentifierToReportingSession;
    NSMutableDictionary *_uniqueIdentifierToSummaryEvent;
}

@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, nonatomic) int clientType;
@property (readonly, nonatomic) long long clientVersion;
@property (readonly, weak, nonatomic) MPAVController *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultClientVersion;
+ (id)newHierarchyTokenFromParentToken:(id)a0;

- (BOOL)_isAVItemReadyForReportingSessionInitialization:(id)a0;
- (void)_completeSetupForReportingSession:(id)a0 avItem:(id)a1 fallbackQueueFeeder:(id)a2;
- (id)_preparedSummaryEventForAVItem:(id)a0;
- (void)_configureStartupStateForSummaryEvent:(id)a0 withItem:(id)a1;
- (void).cxx_destruct;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)a0;
- (void)_avControllerItemWillChangeNotification:(id)a0;
- (void)_avControllerBufferingStateDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_setPerceivedTotalStartupTimeForItem:(id)a0 withSummaryEvent:(id)a1;
- (id)_uniqueIdentifierForAVItem:(id)a0;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)a0;
- (void)_avItemAssetLoadedNotification:(id)a0;
- (id)initWithPlayer:(id)a0 clientName:(id)a1 clientType:(int)a2 clientVersion:(long long)a3;
- (void)_networkTypeDidChangeNotification:(id)a0;
- (void)_completeSetupForReportingSession:(id)a0 avItem:(id)a1;
- (void)_configureBaseEventPropertiesForEvent:(id)a0;
- (id)_reportingSessionForAVItem:(id)a0;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)a0;
- (BOOL)_isAVItemReadyForReportingSessionSetupCompletion:(id)a0;
- (id)_newReportingSession;
- (void)_handleDeallocationForUniqueIdentifier:(id)a0;
- (void)_initializeReportingSession:(id)a0 forAVItem:(id)a1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)a0;
- (void)_avItemTypeDidChangeNotification:(id)a0;

@end
