@class NSTimer, NSString, SPBeaconManager, UIView, _UIVibrantSettings, UIButton, SBUIShapeView, UILabel, _UIActionSlider;
@protocol SBUIPowerDownViewDelegate;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface> {
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    UIButton *_findMyButton;
    _UIVibrantSettings *_vibrantSettings;
}

@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (nonatomic) BOOL deviceSupportsFindMy;
@property (nonatomic) BOOL shouldPowerDownViewShowFindMyAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPowerDownViewDelegate> delegate;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_idleTimerFired;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 vibrantSettings:(id)a1;
- (void)actionSlider:(id)a0 didUpdateSlideWithValue:(double)a1;
- (void)actionSliderDidCompleteSlide:(id)a0;
- (void)actionSliderDidCancelSlide:(id)a0;
- (void)actionSliderDidBeginSlide:(id)a0;
- (void)dealloc;
- (void)_cancelButtonTapped;
- (void)_readIODeviceSupportsFindMy;
- (void)_readShouldPowerDownViewShowFindMyAlert;
- (id)_createActionSlider;
- (void)_cancelAutoDismissTimer;
- (void)_didTapFindMy;
- (void)_updateSliderExclusionPath;
- (void)_willAnimateIn;
- (void)_resetAutoDismissTimer;
- (void)_willAnimateOut;
- (BOOL)_isLandscapeAspectRatio;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)a0;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_createFindMyUI;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)didAcknowledgeFindMyInfo;
- (void)didSuppressFindMy;
- (void)_prepareViewsForAlert;

@end
