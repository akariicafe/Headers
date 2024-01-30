@class UIColor, NSString, UIView, CLKComplicationTemplate, CLKDevice, NSDate;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay> {
    UIView *_platter;
    UIView *_highlightView;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
}

@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) BOOL useRoundedFontDesign;
@property (nonatomic) BOOL usesMediumLayout;
@property (nonatomic) BOOL wantsPlatter;
@property (nonatomic) BOOL usesMultiColor;
@property (readonly) NSDate *timeTravelDate;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (id)viewForComplicationType:(unsigned long long)a0;
+ (id)_stopwatchImageProviderMedium:(BOOL)a0;
+ (id)_imageProviderForImageSymbolName:(id)a0 imageAssetNamePrefix:(id)a1;
+ (id)mediumViewForComplicationType:(unsigned long long)a0;
+ (id)_timerImageProviderMedium:(BOOL)a0;
+ (id)_alarmImageProviderMedium:(BOOL)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (id)_newLabelSubviewWithFont:(id)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x12; double x13; double x14; double x15; })_layoutConstants;
- (void)_computeForegroundColor;
- (void)_computePlatterColor;
- (void)_updateColorChange;
- (void)_updateForegroundColor;
- (void)_updatePlatterColor;
- (void)_updateLabelsForFontChange;
- (id)_computedForegroundColor;
- (void)_updateForTemplateChange;
- (long long)_variableFontSizeForText:(id)a0;
- (id)_computedPlatterColor;
- (void)_updateImageViewColor:(id)a0;
- (void)_updateLabelViewColor:(id)a0;
- (id)_mediumStackFontForText:(id)a0;
- (id)_fontForDynamicFontSize:(long long)a0;

@end
