@class CLKComplicationTemplateSimpleText, NSString, NTKColoringLabel, NSDate, CLKDevice, CLKFont;
@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>

@property (retain, nonatomic) NTKColoringLabel *label;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CLKComplicationTemplateSimpleText *template;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (retain, nonatomic) CLKFont *font;
@property (readonly, nonatomic) unsigned long long complicationType;
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

- (id)init;
- (void).cxx_destruct;
- (id)_defaultFont;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (id)complicationTemplate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)_updateLabelFrame;

@end
