@class UIButton, NSString, NSTimer, _UIActionSlider, UIView, UILabel, SBUIShapeView;
@protocol SBUIPowerDownViewDelegate;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface> {
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPowerDownViewDelegate> delegate;

- (void).cxx_destruct;
- (void)_idleTimerFired;
- (void)dealloc;
- (void)_cancelAutoDismissTimer;
- (void)_updateSliderExclusionPath;
- (void)_willAnimateIn;
- (void)_resetAutoDismissTimer;
- (void)_willAnimateOut;
- (BOOL)_isLandscapeAspectRatio;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)a0;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_animatePowerDown;
- (void)_powerDownSliderDidCancelSlide;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_cancelButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 vibrantSettings:(id)a1;
- (void)actionSliderDidCompleteSlide:(id)a0;
- (void)actionSlider:(id)a0 didUpdateSlideWithValue:(double)a1;
- (void)actionSliderDidCancelSlide:(id)a0;
- (void)actionSliderDidBeginSlide:(id)a0;
- (void)layoutSubviews;
- (void)showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
