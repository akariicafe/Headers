@class NSString, UISegmentedControl, PXProgrammaticNavigationDestination, PXPlacesMapFetchResultViewController;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (nonatomic) unsigned long long previousNavigationBarSegmentedControlSelectedIndex;
@property (retain, nonatomic) UISegmentedControl *subviewControl;
@property (nonatomic) BOOL gridControllerEditing;
@property (nonatomic) long long initialNavigationBarStyle;
@property (readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)px_navigationDestination;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_resetNavigationItem;
- (void)_updateShouldOptOutFromChromelessBars;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)setNavigationBarButtons:(id)a0;
- (void)setToolbarButtons:(id)a0;
- (void)subviewControlChanged:(id)a0;
- (void)viewController:(id)a0 didUpdateBarsAnimated:(BOOL)a1 isSelecting:(BOOL)a2;
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)a0;

@end
