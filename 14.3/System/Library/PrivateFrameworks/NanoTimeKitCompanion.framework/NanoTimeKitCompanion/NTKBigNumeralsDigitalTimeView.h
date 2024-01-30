@class NSDate, NSString, UIView, CLKDevice, CALayer, CAGradientLayer, NTKBigNumeralsTimeComponentLabel, CLKClockTimerToken;
@protocol NTKBigNumeralsDigitalTimeViewDelegate;

@interface NTKBigNumeralsDigitalTimeView : UIView <NTKTimeView> {
    CLKDevice *_device;
    NTKBigNumeralsTimeComponentLabel *_topLabel;
    NTKBigNumeralsTimeComponentLabel *_bottomLabel;
    double _statusBarTransitionFraction;
    NSDate *_overrideDate;
    CLKClockTimerToken *_timerToken;
    CAGradientLayer *_gradientLayer;
    CALayer *_topLabelColorLayer;
    CALayer *_bottomLabelColorLayer;
    UIView *_timeLabelsContainerView;
}

@property (nonatomic) BOOL showingStatus;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) unsigned long long typeface;
@property (readonly, nonatomic) unsigned long long color;
@property (weak, nonatomic) id<NTKBigNumeralsDigitalTimeViewDelegate> delegate;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)a0;
- (void)dealloc;
- (void)applyStyle:(unsigned long long)a0;
- (void)_updateLabels;
- (void)layoutSubviews;
- (void)applyTypeface:(unsigned long long)a0;
- (void)applyColor:(unsigned long long)a0;
- (void)applyTransitionFraction:(double)a0 fromTypeface:(unsigned long long)a1 toTypeface:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (void)cleanupTransition;
- (void)setOverrideDate:(id)a0 duration:(double)a1;

@end
