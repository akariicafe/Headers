@class NSString, NSMapTable, SKUINavigationBarViewElement;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate> {
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SKUINavigationBarViewElement *_navigationBarElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)_buttonAction:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (id)initWithNavigationBarViewElement:(id)a0;
- (void)_updateButtonItem:(id)a0 withButtonViewElement:(id)a1;
- (id)addButtonItemWithButtonViewElement:(id)a0;
- (void)disconnectAllButtons;
- (id)barButtonItemForElementIdentifier:(id)a0;
- (id)_imageForImageViewElement:(id)a0;
- (void)_itemOfferAction:(id)a0;
- (void)_updateItemOfferButton:(id)a0 withButtonViewElement:(id)a1;
- (void)_reloadButtonItem:(id)a0 withButtonViewElement:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageInsetsForImageViewElement:(id)a0;

@end
