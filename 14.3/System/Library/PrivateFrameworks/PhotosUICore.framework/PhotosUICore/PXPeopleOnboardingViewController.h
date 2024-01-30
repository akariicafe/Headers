@class PXPeopleSectionedDataSource, NSString, PXPeopleProgressManager, PXPeopleStatusViewController;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate>

@property (nonatomic) unsigned long long onboardStatus;
@property (retain, nonatomic) PXPeopleProgressManager *progressManager;
@property (retain, nonatomic) PXPeopleStatusViewController *statusViewController;
@property (retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_navigationDestination;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_updateWithStatus:(unsigned long long)a0 progress:(double)a1;
- (void)didReceiveMemoryWarning;
- (void)statusViewControllerEnterButtonTapped:(id)a0;
- (id)initWithDataSource:(id)a0 progressManager:(id)a1;
- (void)_updateStatusViewForStatus:(unsigned long long)a0 progress:(double)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1;
- (id)peopleHomeController;
- (void)_pushToPeopleHome:(id)a0;
- (void)_progressChanged:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
