@class NSString, UILabel, CLKTimeFormatter;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusWorldClockComplicationView : NTKZeusComplicationView <CLKTimeFormatterObserver, NTKWorldClockComplicationDisplay> {
    UILabel *_timeLabel;
    UILabel *_cityLabel;
    CLKTimeFormatter *_formatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;

- (void)setTimeZone:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateLabels;
- (void)setOverrideDate:(id)a0;
- (void)layoutSubviews;
- (id)initWithBackgroundView:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)timeFormatterTextDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShortCity:(id)a0;

@end
