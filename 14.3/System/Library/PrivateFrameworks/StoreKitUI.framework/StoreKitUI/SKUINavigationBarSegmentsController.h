@class SKUISegmentedControlViewElementController;

@interface SKUINavigationBarSegmentsController : SKUINavigationBarSectionController {
    SKUISegmentedControlViewElementController *_underlyingController;
}

- (void).cxx_destruct;
- (id)view;
- (id)initWithViewElement:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;
- (void)willAppearInNavigationBar;

@end
