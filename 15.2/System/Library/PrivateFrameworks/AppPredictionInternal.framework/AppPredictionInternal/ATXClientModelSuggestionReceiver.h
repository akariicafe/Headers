@class _PASSimpleCoalescingTimer, NSString, ATXHomeScreenSuggestionSender, _ATXInternalUninstallNotification, ATXUniversalBlendingLayerServer, ATXAppDirectoryOrderingProvider, ATXClientModelCacheManager, NSObject, UNUserNotificationCenter, ATXLockscreenSuggestionSender, ATXClientModelSuggestionRouter;
@protocol OS_dispatch_queue;

@interface ATXClientModelSuggestionReceiver : NSObject <UNUserNotificationCenterDelegate, ATXBlendingLayerDelegateProtocol, ATXBlendingLayerServerDelegateProtocol> {
    ATXClientModelSuggestionRouter *_router;
    ATXAppDirectoryOrderingProvider *_appDirectoryOrderingProvider;
    ATXHomeScreenSuggestionSender *_homeScreenSuggestionSender;
    ATXLockscreenSuggestionSender *_lockscreenSuggestionSender;
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
+ (void)_updateCacheForClientModel:(id)a0 withSuggestions:(id)a1 cacheManager:(id)a2;
+ (id)layoutSelectorsForConsumerSubTypes;

- (void)blendingLayerUpdatedUICache:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)rerouteSuggestions:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;
- (id)initWithBlendingLayerServer:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_sendStackChangeDebugNotification:(id)a0;
- (void)routeSuggestionsToInfoSuggestionEngine:(id)a0 clientModelId:(id)a1 completion:(id /* block */)a2;

@end
