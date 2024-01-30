@class SKUIItemArtworkContext, SKUIProductPageHeaderFloatingView, SKUIItemOffer, SSVLoadURLOperation, NSString, UIPopoverController, SKUIProductPage, NSOperationQueue, SKUIClientContext, SKUIItem, SKUIContentRatingArtworkResourceLoader, SKUIProductPageHeaderView, UIImage;
@protocol SKUIProductPageHeaderViewDelegate;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {
    UIPopoverController *_activityPopoverController;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIItemArtworkContext *_artworkContext;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    long long _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    long long _personalizationState;
    SKUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SKUIProductPage *_productPage;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    BOOL _performArtistActionOnLoad;
}

@property (readonly, nonatomic) SKUIItem *item;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIProductPageHeaderViewDelegate> delegate;
@property (nonatomic) BOOL askPermission;
@property (readonly, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long selectedSectionIndex;
@property (readonly, nonatomic) SKUIProductPageHeaderFloatingView *floatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (id)_activeItem;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (BOOL)_isRestricted;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)itemStateCenterRestrictionsChanged:(id)a0;
- (void)setProductPage:(id)a0;
- (void)_destroyPopoverController;
- (void)_itemOfferButtonAction:(id)a0;
- (id)_artworkContext;
- (id)_segmentedControlTitles;
- (void)_sectionControlAction:(id)a0;
- (void)_setPersonalizedOffer:(id)a0;
- (void)_setArtworkWithImage:(id)a0 error:(id)a1;
- (void)_loadUberImageIfAvailable;
- (void)_reloadItemStateAnimated:(BOOL)a0;
- (void)_showActivityViewControllerFromView:(id)a0;
- (id)_contentRatingResourceLoader;
- (void)_artistButtonAction:(id)a0;
- (id)_ageBandString;
- (void)_shareButtonAction:(id)a0;
- (void)_showAskPermissionBanner;
- (void)_setItemState:(id)a0 animated:(BOOL)a1;
- (void)_sendDidReloadOffer;
- (void)_setUberWithImage:(id)a0 error:(id)a1;
- (void)_showSynthesizedItemStateWithFlag:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_disableItemOfferButtonWithTitle:(id)a0 animated:(BOOL)a1;

@end
