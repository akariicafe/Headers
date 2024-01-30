@class GEOUnifiedActionButtonModuleConfiguration, MUAMSResultProvider, MKPlaceActionManager, MUTimeExpirableLRUCache, _MKPlaceActionButtonController, MKETAProvider;
@protocol MUHeaderButtonMenuActionProvider, MUPlaceActionRowMenuProvider, MUExternalActionHandling;

@interface MUPlaceUnifiedActionRowSectionControllerConfiguration : NSObject

@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (nonatomic) unsigned long long primaryButtonType;
@property (weak, nonatomic) id<MUHeaderButtonMenuActionProvider> moreActionsProvider;
@property (weak, nonatomic) id<MUPlaceActionRowMenuProvider> actionRowMenuProvider;
@property (weak, nonatomic) MKETAProvider *etaProvider;
@property (weak, nonatomic) id<MUExternalActionHandling> externalActionHandler;
@property (retain, nonatomic) GEOUnifiedActionButtonModuleConfiguration *buttonModuleConfiguration;
@property (nonatomic) BOOL shouldPerformMapsExtensionDiscovery;
@property (nonatomic) BOOL canShowDetourTime;
@property (nonatomic) BOOL isSearchAlongRoute;
@property (nonatomic) BOOL showMoreButtonIfAvailable;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryActionButtonController;
@property (retain, nonatomic) MUTimeExpirableLRUCache *artworkCache;
@property (retain, nonatomic) MUAMSResultProvider *amsResultProvider;

- (void).cxx_destruct;

@end
