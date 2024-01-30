@class HUNearbyAccessoriesItemManager, NSArray, NSString, HMAccessory, UILabel, _UIContentUnavailableView;
@protocol HUNearbyAccessoriesViewControllerDelegate, HUPresentationDelegate;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController <HUPresentationDelegateHost>

@property (retain, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager;
@property (retain, nonatomic) _UIContentUnavailableView *userInfoHeading;
@property (retain, nonatomic) UILabel *userInfoDescription;
@property (retain, nonatomic) NSArray *userInfoConstraints;
@property (nonatomic) BOOL supportsQuickControls;
@property (weak, nonatomic) id<HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)doneButtonPressed:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)a0;
- (void)displayEditor;
- (void)_updateUserInfo;
- (id)initWithSourceItem:(id)a0 supportsQuickControls:(BOOL)a1;

@end
