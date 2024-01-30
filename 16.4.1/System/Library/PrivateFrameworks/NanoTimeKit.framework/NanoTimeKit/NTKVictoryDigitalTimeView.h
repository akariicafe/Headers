@class NSString, CLKTimeFormatter, NTKVictoryDigitsView, CLKDevice;
@protocol NTKVictoryDigitalColorPalette, NTKVictoryDigitalTimeViewDelegate;

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {
    CLKDevice *_device;
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    BOOL _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
}

@property (nonatomic) BOOL invertedColors;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) id<NTKVictoryDigitalColorPalette> colorPalette;
@property (weak, nonatomic) id<NTKVictoryDigitalTimeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) BOOL frozen;

+ (id)transitionTimingFunction;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTimeOffset:(double)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)_lowerDigitAppearanceForStyle:(unsigned long long)a0;
- (void)_resetDigitAppearanceForStyle:(unsigned long long)a0;
- (void)_setFlipViewIsLower:(BOOL)a0;
- (void)_setupFlipDigitsView;
- (long long)_upperDigitAppearanceForStyle:(unsigned long long)a0;
- (void)applyPopAnimationTransitionFraction:(double)a0;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)clearEditingTransitions;
- (long long)defaultAppearance;
- (id)initForDevice:(id)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)timeFormatterTextDidChange:(id)a0;
- (void)willBeginEditing;

@end
