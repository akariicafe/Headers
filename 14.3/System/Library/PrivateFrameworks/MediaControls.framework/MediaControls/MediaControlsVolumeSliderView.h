@class NSObject, UIImpactFeedbackGenerator, UIView;
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

- (void)resetThresholdAcknowledgment;
- (void).cxx_destruct;
- (id)createBackgroundView;
- (void)_registerForAVSystemControllerNotifications;
- (void)setupEUDevice;
- (void)_EUVolumeLimitChanged:(id)a0;
- (float)_valueByApplyingEULimitsToValue:(float)a0;
- (void)layoutSubviews;
- (void)_EUVolumeEnforcementChanged:(id)a0;
- (void)setGlyphPackageDescription:(id)a0 state:(id)a1 animated:(BOOL)a2;
- (void)_serverConnectionDied:(id)a0;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)filteredValueForValue:(float)a0;
- (void)_avSystemControllerQueue_initializeEUVolumeLimits;
- (void)_unregisterForAVSystemControllerNotifications;

@end
