@class NSObject, UIView, UIImpactFeedbackGenerator, UIImageSymbolConfiguration;
@protocol OS_dispatch_queue;

@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {
    UIView *_orangeValueView;
    BOOL _didAcknowledgeThreshold;
    BOOL _didHitThreshold;
    BOOL _didTakeActionToAcknowledge;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIView *_materialView;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
}

@property (getter=isEUDevice) BOOL euDevice;
@property (getter=isEUVolumeLimitEnforced) BOOL euVolumeLimitEnforced;
@property float euVolumeLimit;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

- (void)_registerForAVSystemControllerNotifications;
- (void)layoutSubviews;
- (void)setGlyphPackageDescription:(id)a0 state:(id)a1 animated:(BOOL)a2;
- (void)setGlyphImage:(id)a0 packageDescription:(id)a1 state:(id)a2 animated:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_avSystemControllerQueue_initializeEUVolumeLimits;
- (void)_EUVolumeLimitChanged:(id)a0;
- (void)_EUVolumeEnforcementChanged:(id)a0;
- (void)_serverConnectionDied:(id)a0;
- (void)setupEUDevice;
- (void).cxx_destruct;
- (id)createBackgroundView;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)setOutputDeviceAsset:(id)a0 state:(id)a1 animated:(BOOL)a2;
- (float)_valueByApplyingEULimitsToValue:(float)a0;
- (void)resetThresholdAcknowledgment;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (float)filteredValueForValue:(float)a0;

@end
