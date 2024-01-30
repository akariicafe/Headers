@class MRUNowPlayingViewController, NSArray, MRPlatterViewController, NSString, NSLayoutConstraint;

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRUNowPlayingViewControllerDelegate, MRPlatterViewControllerDelegate>

@property (retain, nonatomic) MRPlatterViewController *mediaControlViewController;
@property (retain, nonatomic) MRUNowPlayingViewController *mediaControlsNowPlayingViewController;
@property (retain, nonatomic) NSArray *mediaControlViewControllerConstraints;
@property (retain, nonatomic) NSLayoutConstraint *viewHeightConstraint;
@property (retain, nonatomic) NSString *mediaRoutingIdentifier;
@property (readonly, nonatomic) long long mediaAccessoryItemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)platterViewController:(id)a0 didReceiveInteractionEvent:(id)a1;
- (void)_updateConstraints;
- (BOOL)_canShowWhileLocked;
- (id)title;
- (void)viewDidLoad;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (void)setPreferredFrameLayoutGuide:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (BOOL)hasSingleControlView;
- (void)_addMediaControlView;
- (void)_addLegacyMediaControlView;
- (void)_updateLegacyConstraints;
- (void)_updateMediaControlAppearanceForTraitCollection:(id)a0;
- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)platterViewController:(id)a0 didUpdateEndpointWithReason:(id)a1;
- (void)nowPlayingViewControllerDidChangeLayout:(id)a0;

@end
