@class NTKWorldClockRichComplicationHandsBaseView, UIView, UIColor, CLKDevice, NSArray, NTKRichComplicationDialView, UIFontDescriptor, NSString, CLKUIAlmanacTransitInfo, CLKClockTimerToken, UILabel;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockGraphicCircularView : UIView <CLKFullColorImageView> {
    BOOL _showGossamerUI;
}

@property (readonly, nonatomic) UILabel *cityNameLabel;
@property (readonly, nonatomic) UILabel *northHourLabel;
@property (readonly, nonatomic) UILabel *eastHourLabel;
@property (readonly, nonatomic) UILabel *westHourLabel;
@property (readonly, nonatomic) UILabel *southHourLabel;
@property (readonly, nonatomic) NTKWorldClockRichComplicationHandsBaseView *handsView;
@property (readonly, nonatomic) NTKRichComplicationDialView *dialView;
@property (readonly, nonatomic) UIView *platter;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) struct { double cityNameFontSize; double cityNameBaselineOffsetNorthSide; double cityNameBaselineOffsetSouthSide; double hourFontSize; double hourInset; double dialDiameter; struct CGSize { double width; double height; } majorTickSize; struct CGSize { double width; double height; } minorTickSize; } layoutConstants;
@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken;
@property (nonatomic) BOOL positionLabelNorthSide;
@property (retain, nonatomic) CLKUIAlmanacTransitInfo *transitInfo;
@property (nonatomic) double monochromeFraction;
@property (nonatomic) BOOL useDayTimeColoring;
@property (nonatomic, getter=hasPerformedColoringFirstPass) BOOL coloringFirstPassPerformed;
@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeSecondHandColor;
@property (retain, nonatomic) UIColor *daytimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *daytimeHandsSmallTickColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeSecondHandColor;
@property (retain, nonatomic) UIColor *nighttimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *nighttimeHandsSmallTickColor;
@property (readonly, nonatomic) NSArray *hourLabels;
@property (nonatomic) double tintedFraction;
@property (retain, nonatomic) UIColor *tintedPlatterColor;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)eastLabelNumber;
+ (id)westLabelNumber;
+ (id)_createHandsViewForDevice:(id)a0;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; struct CGSize { double x0; double x1; } x6; struct CGSize { double x0; double x1; } x7; })_layoutConstantsForDevice:(id)a0;
+ (BOOL)_shouldUseDaytimeColoringForTransitInfo:(id)a0 atDate:(id)a1;
+ (id)northLabelNumber;
+ (id)southLabelNumber;

- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)applyConfiguration:(id)a0 animated:(BOOL)a1;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateCityAbbreviationColor;
- (void)_updateDayTimeColoring;
- (void)_updateHandsColor;
- (void)_updateHourLabelColors;
- (BOOL)_updateLabelAndDial;
- (void)_updatePlatterColor;
- (void)_updateTickColor;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 smallTickCount:(unsigned long long)a1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
