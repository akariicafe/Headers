@class SKUIViewElementLayoutContext, SKUINavigationBarContext, SKUIPaletteViewElement, SKUINavigationPaletteView;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (id)view;
- (void).cxx_destruct;
- (id)viewForElementIdentifier:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)willAppearInNavigationBar;
- (void)reloadSectionViews;
- (id)initWithPaletteViewElement:(id)a0;

@end
