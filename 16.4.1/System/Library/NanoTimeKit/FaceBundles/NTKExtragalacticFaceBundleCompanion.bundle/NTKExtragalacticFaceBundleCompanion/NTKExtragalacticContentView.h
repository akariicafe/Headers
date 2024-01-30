@class NSString, CLKTimeFormatter, NTKExtragalacticBackgroundView, NTKExtragalacticDigitsView, CLKDevice;
@protocol NTKExtragalacticColorPalette;

@interface NTKExtragalacticContentView : UIView <CLKTimeFormatterObserver, NTKTimeView> {
    CLKDevice *_device;
    CLKTimeFormatter *_timeFormatter;
    NTKExtragalacticBackgroundView *_backgroundView;
    NTKExtragalacticDigitsView *_digitsView;
}

@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) id<NTKExtragalacticColorPalette> palette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) BOOL frozen;

- (void)setTimeOffset:(double)a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)timeFormatterTextDidChange:(id)a0;
- (void)_setupTimeFormatter;
- (void)_applyPalette;
- (id)_digitNumbersFromFormatter:(id)a0;
- (void)_updateTimeDigits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1 palette:(id)a2;
- (void)screenDidTurnOff;
- (void)screenWillTurnOn;

@end
