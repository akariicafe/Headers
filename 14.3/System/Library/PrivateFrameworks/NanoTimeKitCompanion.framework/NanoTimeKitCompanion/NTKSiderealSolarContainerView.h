@class CAGradientLayer, UIImageView, NTKSiderealColorManager, UIView, CLKDevice;

@interface NTKSiderealSolarContainerView : UIView {
    CLKDevice *_device;
    UIImageView *_dayPathGlow;
    UIImageView *_dayDiskBloom;
    CAGradientLayer *_dayDiskGnomon;
    CAGradientLayer *_nightDiskGnomon;
    double _orbitDiameter;
    NTKSiderealColorManager *_colorManager;
}

@property (retain, nonatomic) UIView *dayContainerView;
@property (retain, nonatomic) UIView *dayDisk;
@property (retain, nonatomic) UIView *dayAccessoryContainerView;
@property (retain, nonatomic) UIView *nightContainerView;
@property (retain, nonatomic) UIView *nightDisk;
@property (retain, nonatomic) UIView *nightRing;
@property (retain, nonatomic) UIView *nightAccessoryContainerView;

- (void).cxx_destruct;
- (id)_newGnomonView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orbitDiameter:(double)a1 device:(id)a2;
- (double)poseForDayGnomonImage;
- (double)poseForDayDiskBloomImage;
- (double)poseForDayDiskImage;
- (double)poseForNightGnomonImage;
- (double)poseForNightDiskImage;
- (double)poseForNightRingImage;
- (void)setSolarDayProgress:(double)a0;

@end
