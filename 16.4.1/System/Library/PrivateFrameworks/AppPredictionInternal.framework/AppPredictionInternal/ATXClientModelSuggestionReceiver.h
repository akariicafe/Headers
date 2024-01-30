@class UNUserNotificationCenter, NSObject, ATXSpotlightActionsSuggestionSender, ATXClientModelCacheManager, ATXAppSwitcherSuggestionSender, NSString, ATXUniversalBlendingLayerServer, _ATXInternalUninstallNotification, ATXLockscreenSuggestionSender, ATXHomeScreenSuggestionSender, ATXClientModelSuggestionRouter, ATXAppDirectoryOrderingProvider, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface ATXClientModelSuggestionReceiver : NSObject <UNUserNotificationCenterDelegate, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol> {
    ATXClientModelSuggestionRouter *_router;
    ATXAppDirectoryOrderingProvider *_appDirectoryOrderingProvider;
    ATXAppSwitcherSuggestionSender *_appSwitcherSuggestionSender;
    ATXHomeScreenSuggestionSender *_homeScreenSuggestionSender;
    ATXLockscreenSuggestionSender *_lockscreenSuggestionSender;
    ATXSpotlightActionsSuggestionSender *_spotlightActionsSuggestionSender;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    ATXClientModelCacheManager *_clientModelCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedBlendingLayerRefreshOperation;
    int _homeScreenStackChangeDarwinNotificationObserver;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)clearPreviouslyPersistedCachesForCardSuggestionClientsIfNecessary;
+ (id)layoutSelectorsForConsumerSubTypes;
+ (void)_updateCacheForClientModel:(id)a0 withSuggestions:(id)a1 cacheManager:(id)a2;

- (BOOL)rerouteSuggestions:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)routeSuggestionsToInfoSuggestionEngine:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (void)_sendStackChangeDebugNotification:(id)a0;
- (void)dealloc;
- (id)initWithBlendingLayerServer:(id)a0;
- (id)init;
- (void)start;
- (void)blendingLayerUpdatedUICache:(id)a0 consumerSubType:(unsigned char)a1;
- (void).cxx_destruct;

@end
