@class SKUIQuicklinksPageComponent, NSString, SKUIQuicklinksViewController;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property (readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfCells;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_quicklinksViewController;
- (void)quicklinksViewController:(id)a0 didSelectLink:(id)a1 atIndex:(long long)a2;

@end
