@class UIViewController, NSString, UISegmentedControl, PXProgrammaticNavigationDestination, PXPlacesMapFetchResultViewController;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) UISegmentedControl *subviewControl;
@property (nonatomic) BOOL gridControllerEditing;
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_navigationDestination;
- (id)init;
- (void).cxx_destruct;
- (void)setBarButtonItems:(id)a0;
- (void)loadView;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)a0;
- (void)_switchChildViewControllerFrom:(id)a0 to:(id)a1;
- (void)subviewControlChanged:(id)a0;
- (void)_resetNavigationItem;
- (void)viewDidLoad;

@end
