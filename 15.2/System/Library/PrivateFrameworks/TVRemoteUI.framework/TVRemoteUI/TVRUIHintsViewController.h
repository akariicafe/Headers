@class TVRUIHintsGlyphView, NSString, TPKContentPopoverViewController, UIView, _TVRUICubicSpringAnimator, TPKContent, TPKContentController, TVRUIDeviceHardwareInfo;
@protocol TVRUIHintsStyleProvider;

@interface TVRUIHintsViewController : UIViewController <TPKContentControllerDelegate, TVRUIRemoteViewControllerDelegate, TVRUIContentPresenter>

@property (retain, nonatomic) UIView *userIntentButtonHint;
@property (retain, nonatomic) UIView *volumeButtonsHint;
@property (retain, nonatomic) TVRUIHintsGlyphView *siriGlyphView;
@property (retain, nonatomic) TVRUIHintsGlyphView *volumeGlyphView;
@property (retain, nonatomic) TVRUIDeviceHardwareInfo *hardwareInfo;
@property (nonatomic) BOOL supportsSiri;
@property (copy, nonatomic) NSString *lastSeenDeviceName;
@property (nonatomic, getter=isPresentingTip) BOOL presentingTip;
@property (retain, nonatomic) id<TVRUIHintsStyleProvider> styleProvider;
@property (retain, nonatomic) _TVRUICubicSpringAnimator *presentationAnimator;
@property (retain, nonatomic) _TVRUICubicSpringAnimator *dismissalAnimator;
@property (retain, nonatomic) TPKContentController *tipContentController;
@property (retain, nonatomic) TPKContentPopoverViewController *tipContentViewController;
@property (retain, nonatomic) TPKContent *tipContent;
@property (nonatomic) BOOL allowSiriHint;
@property (nonatomic) BOOL allowVolumeHint;
@property (nonatomic) BOOL allowTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)currentInterfaceOrientation;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_largeTextEnabledStatusChanged:(id)a0;
- (void)_applyTransformForOrientation:(long long)a0;
- (void)_setupDebugUIIfEnabled;
- (void)dismissHints;
- (void)_setupTipsControllerIfNeeded;
- (void)requestHintsForSiri:(BOOL)a0 volume:(BOOL)a1;
- (void)_dismissHints;
- (void)_updateUserIntentButtonHintFrame;
- (void)_updateVolumeButtonsHintFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForUserIntentButtonPresented:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForVolumeButtonsPresented:(BOOL)a0;
- (void)_setupUserIntentButtonHint;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_gylphTransformForOrientation:(long long)a0;
- (void)_setupVolumeButtonsHint;
- (void)_cleanupHints;
- (unsigned long long)_permittedArrowDirectionsForDevice:(id)a0;
- (void)_presentTipContentViewControllerAnimated:(BOOL)a0;
- (void)device:(id)a0 supportsSiri:(BOOL)a1 volume:(BOOL)a2;
- (void)devicePickerWillExpand;
- (BOOL)hasPresentedContent;
- (void)remoteWillBeDismissed;

@end
