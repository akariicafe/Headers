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

@property (nonatomic) BOOL placeInBookmarks;
@property (nonatomic) BOOL placeInShortcuts;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate;
@property (weak, nonatomic) id transitCardDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contact;
- (void)_launchMaps;
- (id)createMenuActions;
- (id)init;
- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (BOOL)_showReportAProblem;
- (id)mapItem;
- (void)_canMakeCalls:(id /* block */)a0;
- (id)transitDelegate;
- (BOOL)_isCurrentLocationOrDroppedPin;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (BOOL)_showCollectionItem;
- (id)collectionItemForFooter:(BOOL)a0;
- (void)_enableStoreAction;
- (id)shortPlacecardFooterActions;
- (id)optIntoAddingContributionsAction;
- (BOOL)_showHomeShortcutItem;
- (id)addtoHomeItem;
- (id)favoriteItemForFooter;
- (BOOL)_showAddPlaceEdit;
- (id)reportAProblemAddPlaceFooterAction;
- (BOOL)_showReportAnIssue;
- (id)reportAProblemFooterAction;
- (void)addLayoutInfoIfNeeded:(id)a0;
- (BOOL)_showMapItemIdentifier;
- (id)transitLineItem;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)placeItem;
- (id)createFooterActions;
- (id)delegate;
- (unsigned long long)options;

@end
