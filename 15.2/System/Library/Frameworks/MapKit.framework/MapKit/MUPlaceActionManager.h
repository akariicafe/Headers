@protocol MKPlaceCardActionControllerDelegate, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate;

@interface MUPlaceActionManager : MKPlaceActionManager

@property (readonly, nonatomic) id<_MKInfoCardAnalyticsDelegate, _MKPlaceCardConforming, MKPlaceCardActionControllerDelegate> delegate;

- (id)createFooterActions;
- (id)createMenuActions;
- (BOOL)_showWebsite;
- (id)websiteGlyphName;
- (id)collectionItemForFooter:(BOOL)a0;
- (void)_addMyLocationFooterActions:(id)a0;
- (void)_addTransitLineItemFooterActions:(id)a0;
- (void)_addDroppedPinFooterActions:(id)a0;
- (void)_addAddressFooterActions:(id)a0;
- (void)_addBasicFooterActions:(id)a0;
- (void)_addHomeActionIfNeeded:(id)a0;
- (void)_addItemIfInMapsApp:(id)a0 actions:(id)a1;

@end
