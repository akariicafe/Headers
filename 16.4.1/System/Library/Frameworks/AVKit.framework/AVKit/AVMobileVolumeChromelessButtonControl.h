@class NSString, UIImageView, UIView, AVMicaPackage;
@protocol AVMobileVolumeChromlesButtonControlDelegate;

@interface AVMobileVolumeChromelessButtonControl : UIControl {
    struct CGPoint { double x; double y; } _startPoint;
    BOOL _hasStartedPanning;
}

@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *micaPackageContainerView;
@property (retain, nonatomic) NSString *volumeIconState;
@property (weak) id<AVMobileVolumeChromlesButtonControlDelegate> delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_imageNameForMicaPackageState;
- (void)_updateMicaPackage:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_volumeControlButtonDidBeginPanning;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)_volumeControlButtonDidEndPanning;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_volumeControlButtonPanningDidContinueWithXDelta:(double)a0;
- (id)init;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
