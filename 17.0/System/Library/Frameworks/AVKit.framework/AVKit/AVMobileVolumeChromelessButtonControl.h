@class NSString, UIImageView, UIView, AVMicaPackage, UIPointerInteraction;
@protocol AVMobileVolumeChromlesButtonControlDelegate;

@interface AVMobileVolumeChromelessButtonControl : UIControl <UIPointerInteractionDelegate> {
    struct CGPoint { double x; double y; } _startPoint;
    BOOL _hasStartedPanning;
    UIPointerInteraction *_micaPackageContainerPointerInteraction;
}

@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *micaPackageContainerView;
@property (retain, nonatomic) NSString *volumeIconState;
@property (weak) id<AVMobileVolumeChromlesButtonControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_volumeControlButtonDidEndPanning;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_volumeControlButtonPanningDidContinueWithXDelta:(double)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)_imageNameForMicaPackageState;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_updateMicaPackage:(id)a0;
- (void)_volumeControlButtonDidBeginPanning;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;

@end
