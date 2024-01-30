@class NSString, MKPlaceCardActionItem, TUCallProvider;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {
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
@property (nonatomic) BOOL placeInBookmarks;
@property (nonatomic) BOOL placeInCollections;
@property (nonatomic) BOOL placeInShortcuts;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id transitCardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFooterActions;
- (void)openURL:(id)a0;
- (id)mapItem;
- (id)contact;
- (id)createMenuActions;
- (void)_launchMaps;
- (void)_canMakeCalls:(id /* block */)a0;
- (id)transitDelegate;
- (BOOL)_canShowReportAProblem;
- (BOOL)_isCurrentLocationOrDroppedPin;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (BOOL)_showWebsite;
- (id)websiteGlyphName;
- (id)addToHomeItem;
- (BOOL)_showCollectionItem;
- (id)collectionItemForFooter:(BOOL)a0;
- (void)_enableStoreAction;
- (id)shortPlacecardFooterActions;
- (BOOL)_showHomeShortcutItem;
- (BOOL)_showAddPlaceFooterAction;
- (BOOL)_showReportAProblemFooterAction;
- (void)_addInternalOnlyActions:(id)a0;
- (void)addLayoutInfoIfNeeded:(id)a0;
- (BOOL)_showMapItemIdentifier;
- (id)favoriteItemForFooter;
- (BOOL)_showReportAProblem;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (id)transitLineItem;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)placeItem;

@end
