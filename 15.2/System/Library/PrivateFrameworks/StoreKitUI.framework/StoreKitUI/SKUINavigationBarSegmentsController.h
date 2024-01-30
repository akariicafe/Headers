@class SKUISegmentedControlViewElementController;

@interface SKUINavigationBarSegmentsController : SKUINavigationBarSectionController {
    SKUISegmentedControlViewElementController *_underlyingController;
}

- (id)view;
- (void).cxx_destruct;
- (id)initWithViewElement:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;
- (void)willAppearInNavigationBar;

@end
