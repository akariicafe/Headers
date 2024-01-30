@class NSDate, UIFont, UIColor, NSString, CLKComplicationTemplate, CLKDevice, NTKDigitalTimeLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKDigitalTimeComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeLabel;
@property (retain, nonatomic) CLKComplicationTemplate *template;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_labelFont;
- (void)updateDate;
- (void).cxx_destruct;
- (id)init;
- (void)setOverrideDate:(id)a0;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (id)_createLabelViewWithFont:(id)a0;
- (id)complicationTemplate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)timeOffsetChanged;
- (unsigned long long)timelineAnimationFadeTypeOverride;

@end
