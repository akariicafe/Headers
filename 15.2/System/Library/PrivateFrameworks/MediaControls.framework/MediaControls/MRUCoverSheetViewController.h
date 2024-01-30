@class MRUNowPlayingViewController, NSString, NSArray, MRUVisualStylingProvider, MediaControlsInteractionRecognizer;
@protocol MRUCoverSheetViewControllerDelegate;

@interface MRUCoverSheetViewController : UIViewController <MRUNowPlayingViewControllerDelegate, UIGestureRecognizerDelegate, MTVisualStylingRequiring>

@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) MRUNowPlayingViewController *nowPlayingViewController;
@property (retain, nonatomic) MediaControlsInteractionRecognizer *interactionRecognizer;
@property (weak, nonatomic) id<MRUCoverSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)nowPlayingViewController:(id)a0 didChangeSizeWithAnimations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void).cxx_destruct;
- (void)didReceiveInteraction:(id)a0;

@end
