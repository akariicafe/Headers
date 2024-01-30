@class NTKDigitalTimeLabel, NSString, CLKDevice;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView> {
    CLKDevice *_device;
    BOOL _statusBarVisible;
}

@property (retain, nonatomic) NTKDigitalTimeLabel *timeHourView;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTimeOffset:(double)a0;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setStatusBarVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)setTopColor:(id)a0;
- (void)setBottomColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)cancelWristRaiseAnimation;

@end
