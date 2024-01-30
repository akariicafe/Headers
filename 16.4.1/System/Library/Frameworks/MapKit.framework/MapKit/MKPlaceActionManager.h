@class NSString, MKPlaceCardActionItem, TUCallProvider;
@protocol MKPlaceActionManagerTransitDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKPlaceActionManager : NSObject <MKPlaceActionItemAppearanceDataProvider, MKPlaceActionManagerProtocol> {
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
}

@property (readonly, nonatomic) MKPlaceCardActionItem *homeActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *favoriteActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *reportAProblemAddPlaceFooterAction;
@property (readonly, nonatomic) MKPlaceCardActionItem *removeMarkerItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *claimBusinessActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *flyoverActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *shareActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *messageActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *callActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *websiteActionItem;
@property (readonly, nonatomic) MKPlaceCardActionItem *collectionActionItem;
@property (nonatomic) BOOL placeInBookmarks;
@property (nonatomic) BOOL placeInCollections;
@property (nonatomic) BOOL placeInShortcuts;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id<MKPlaceActionManagerTransitDelegate> transitCardDelegate;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)options;
- (id)contact;
- (id)delegate;
- (void)openURL:(id)a0;
- (id)init;
- (id)mapItem;
- (void).cxx_destruct;
- (BOOL)_showReportAProblemFooterAction;
- (id)transitDelegate;
- (id)transitLineItem;
- (void)_addInternalOnlyActions:(id)a0;
- (BOOL)_canClaimThisBusiness;
- (void)_canMakeCalls:(id /* block */)a0;
- (BOOL)_canShowCallAction;
- (BOOL)_canShowReportAProblem;
- (void)_enableStoreAction;
- (BOOL)_isCurrentLocationOrDroppedPin;
- (void)_launchMaps;
- (BOOL)_showAddPlaceFooterAction;
- (BOOL)_showCollectionItem;
- (BOOL)_showHomeShortcutItem;
- (BOOL)_showMapItemIdentifier;
- (BOOL)_showReportAProblem;
- (BOOL)_showWebsite;
- (id)actionItemForButtonItem:(id)a0;
- (void)addLayoutInfoIfNeeded:(id)a0;
- (id)addToHomeItem;
- (id)createContactActions;
- (id)createFooterActions;
- (id)createMenuActions;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (id)createSearchAlongRouteActions;
- (id)favoriteItemForFooter;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)placeInCollectionsForAppearance:(id)a0;
- (id)placeItem;
- (unsigned long long)placeMUIDForAppearance:(id)a0;
- (id)shortPlacecardFooterActions;

@end
