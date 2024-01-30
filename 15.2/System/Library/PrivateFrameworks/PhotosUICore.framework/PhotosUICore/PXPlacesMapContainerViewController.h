@class NSString, UISegmentedControl, PXProgrammaticNavigationDestination, PXPlacesMapFetchResultViewController;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (nonatomic) unsigned long long previousNavigationBarSegmentedControlSelectedIndex;
@property (retain, nonatomic) UISegmentedControl *subviewControl;
@property (nonatomic) BOOL gridControllerEditing;
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)px_navigationDestination;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)viewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)a0;
- (void)setNavigationBarButtons:(id)a0;
- (void)setToolbarButtons:(id)a0;
- (void)subviewControlChanged:(id)a0;
- (void)_updateShouldOptOutFromChromelessBars;
- (void)_resetNavigationItem;

@end
