@class UIContextMenuInteraction, NSMutableDictionary, NSArray, MUTimeExpirableLRUCache;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceQuickLinkMenuElementCoordinatorDataSource;

@interface MUPlaceQuickLinkMenuElementCoordinator : NSObject {
    id<MUPlaceQuickLinkMenuElementCoordinatorDataSource> _dataSource;
    UIContextMenuInteraction *_menuInteraction;
    MUTimeExpirableLRUCache *_artworkURLsByAdamIdentifiersCache;
    NSMutableDictionary *_cachedLockupImagesByIdentifiers;
    NSMutableDictionary *_resolvedAppClipsByIdentifiers;
    NSMutableDictionary *_quickLinkArtworkURLsByAdamIdentifiers;
    BOOL _hasFetchedQuickLinks;
    NSArray *_cachedQuickLinks;
}

@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;

- (void).cxx_destruct;
- (void)_captureTapActionWithAppClipLink:(id)a0;
- (void)_captureTapActionWithQuickLink:(id)a0;
- (id)initWithContextMenuInteraction:(id)a0 dataSource:(id)a1 artworkCache:(id)a2;
- (id)buildQuickLinkMenuElement;
- (id)_buildMenuElementForQuickLink:(id)a0;
- (void)_fetchQuickLinksForMenuElementCoordinatorWithCompletion:(id /* block */)a0;
- (void)_refineWebURLQuickLinks:(id)a0 completion:(id /* block */)a1;
- (void)_instrumentQuickLink:(id)a0;
- (void)_didSelectQuickLink:(id)a0;
- (void)_downloadImageWithQuickLink:(id)a0 completion:(id /* block */)a1;
- (void)_loadOfficialAppWithQuickLink:(id)a0 metrics:(id)a1 completion:(id /* block */)a2;
- (void)_loadAppClipWithQuickLink:(id)a0 metrics:(id)a1 completion:(id /* block */)a2;

@end
