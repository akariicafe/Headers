@class MRUNowPlayingViewController, MediaControlsInteractionRecognizer, NSTimer, MRUVisualStylingProvider, NSString, NSArray, MRUCoverSheetView;
@protocol MRUCoverSheetViewControllerDelegate;

@interface MRUCoverSheetViewController : UIViewController <MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring>

@property (retain, nonatomic) MRUCoverSheetView *view;
@property (retain, nonatomic) MRUCoverSheetView *viewIfLoaded;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController;
@property (retain, nonatomic) MediaControlsInteractionRecognizer *interactionRecognizer;
@property (retain, nonatomic) NSTimer *preferredContentSizeTimer;
@property (weak, nonatomic) id<MRUCoverSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long layout;
@property (copy, nonatomic) id /* block */ preferredContentSizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)updateVisualStyling;
- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)_canShowWhileLocked;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)_childViewControllersForAlwaysOnTimelines;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveInteraction:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)schedulePreferredContentSizeUpdate;
- (void)updateRestrictedRects;

@end
