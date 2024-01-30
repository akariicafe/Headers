@class TVRUIButton, TVRUICaptionsButton, NSString;
@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider>

@property (retain, nonatomic) TVRUIButton *skipForwardButton;
@property (retain, nonatomic) TVRUIButton *skipBackwardButton;
@property (retain, nonatomic) TVRUICaptionsButton *captionsButton;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonActionsDelegate;
@property (nonatomic, getter=isShowingSkipControls) BOOL showSkipControls;
@property (nonatomic, getter=isShowingCaptionControl) BOOL showCaptionControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_createButtons;
- (void)_skipForwardTapped:(id)a0;
- (void)_captionsTapped:(id)a0;
- (void)_skipBackwardTapped:(id)a0;
- (void)_sendButtonTapped:(long long)a0;
- (void)updateCaptionState:(BOOL)a0;

@end
