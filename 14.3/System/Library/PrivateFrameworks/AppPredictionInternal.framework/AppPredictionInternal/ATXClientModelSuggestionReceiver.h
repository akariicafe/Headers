@class _PASSimpleCoalescingTimer, NSString, UNUserNotificationCenter, _PASLock, ATXHomeScreenSuggestionSender, ATXClientModelCacheManager, _ATXInternalUninstallNotification, ATXClientModelNotificationManager, NSObject, NSXPCListener, NSUserDefaults, ATXClientModelSuggestionRouter;
@protocol OS_dispatch_queue;

@interface ATXClientModelSuggestionReceiver : NSObject <UNUserNotificationCenterDelegate, ATXProactiveSuggestionClientModelXPCInterface, NSXPCListenerDelegate> {
    _PASLock *_pendingRefreshTrackerLock;
    ATXClientModelCacheManager *_clientModelCacheManager;
    ATXClientModelNotificationManager *_clientModelNotificationManager;
    ATXClientModelSuggestionRouter *_router;
    ATXHomeScreenSuggestionSender *_homeScreenSuggestionSender;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _blendingDarwinNotificationObserver;
    NSXPCListener *_xpcListener;
    NSUserDefaults *_springboardDefaults;
    int _homeScreenStackChangeDarwinNotificationObserver;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)consumerSubTypesToRefreshGivenUpdatesFromClientModels:(id)a0;
- (void)sendEventToBiomeIfNeededForClientModelCacheUpdate:(id)a0 previousUpdate:(id)a1;
- (void)retrieveSuggestionsForClientModelId:(id)a0 reply:(id /* block */)a1;
- (void)_refreshBlendingLayerAfterLaunch;
- (id)init;
- (void).cxx_destruct;
- (void)clientModelUpdatedNotificationId:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)refreshBlendingLayer;
- (void)dealloc;
- (void)clientModelUpdatedSuggestions:(id)a0 feedbackMetadata:(id)a1 clientModelId:(id)a2 completion:(id /* block */)a3;
- (void)setupXPCListener;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)willForceRefreshOfAllUIs;
- (void)coalescedBlendingLayerRefresh;
- (void)_sendStackChangeDebugNotification:(id)a0;
- (id)initWithClientModelCacheManager:(id)a0 clientModelNotificationManager:(id)a1;
- (void)routeSuggestionsToInfoSuggestionEngine:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)start;
- (void)refreshBlendingLayerIfNeededForNewSuggestions:(id)a0 previousCacheUpdate:(id)a1 clientModelId:(id)a2;
- (id)clientModelsThatUpdatedSuggestionsRecently;
- (void)retrieveAvailableCriterionIdentifiersForClientModelId:(id)a0 reply:(id /* block */)a1;
- (void)updateClientModelCacheWithCacheUpdate:(id)a0 previousCacheUpdate:(id)a1 completion:(id /* block */)a2;
- (id)initWithClientModelCacheManager:(id)a0 clientModelNotificationManager:(id)a1 clientModelRouter:(id)a2;

@end
