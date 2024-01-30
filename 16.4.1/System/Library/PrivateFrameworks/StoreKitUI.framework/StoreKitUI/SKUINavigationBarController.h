@class UIView, NSString, NSArray, SKUINavigationBarViewElement, SKUINavigationBarContext, SKUIClientContext, SKUINavigationPaletteController, SKUIButtonViewElement, NSMutableArray, SKUINavigationBarButtonsController, UIViewController, NSMapTable;
@protocol SKUINavigationBarControllerDelegate;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate> {
    SKUINavigationBarButtonsController *_buttonsController;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUIButtonViewElement *_titleButtonViewElement;
}

@property (retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUINavigationBarControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) UIView *navigationPaletteView;
@property (readonly, nonatomic) NSArray *existingSearchBarControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (double)_availableWidth;
- (void)detachNavigationItemControllers;
- (id)_addSearchBarControllerWithViewElement:(id)a0;
- (id)_attributedStringForButton:(id)a0;
- (id)_attributedStringForButtonText:(id)a0 type:(long long)a1 style:(id)a2;
- (id)_barButtonItemWithButtonViewElement:(id)a0;
- (id)_barButtonItemWithSearchBarViewElement:(id)a0;
- (id)_barButtonItemWithViewElement:(id)a0;
- (id)_buttonWithElement:(id)a0 width:(double)a1;
- (void)_fullyReloadSections:(id)a0 withNavigationItem:(id)a1;
- (id)_navigationBarContext;
- (id)_resourceImageForImageElement:(id)a0;
- (void)_titleButtonAction:(id)a0;
- (void)_viewElementEventNotification:(id)a0;
- (void)attachToNavigationItem:(id)a0;
- (id)barButtonItemForElementIdentifier:(id)a0;
- (void)detachFromNavigationItem:(id)a0;
- (id)fallbackTitleView;
- (id)initWithNavigationBarViewElement:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)setReusableSearchBarControllers:(id)a0;
- (id)titleViewWithViewElement:(id)a0;
- (void)updateNavigationItem:(id)a0;
- (id)viewForElementIdentifier:(id)a0;

@end
