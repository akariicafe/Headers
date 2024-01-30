@class CSDiscoveryItemExplorePostersPlatterView;

@interface CSDiscoveryItemExplorePostersViewController : CSDiscoveryItemViewController

@property (retain, nonatomic) CSDiscoveryItemExplorePostersPlatterView *platter;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setScreenOn:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateAnimationState;
- (id)initWithPlatter:(id)a0 firstDidAppearCompletion:(id /* block */)a1;

@end
