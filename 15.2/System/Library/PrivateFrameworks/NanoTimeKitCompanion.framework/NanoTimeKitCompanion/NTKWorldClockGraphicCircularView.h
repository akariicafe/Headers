@class NTKWorldClockRichComplicationHandsBaseView, UILabel, NSString, CLKDevice, NTKRichComplicationDialView, CLKUIAlmanacTransitInfo, CLKClockTimerToken, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockGraphicCircularView : UIView <CLKFullColorImageView>

@property (readonly, nonatomic) UILabel *cityNameLabel;
@property (readonly, nonatomic) UILabel *northHourLabel;
@property (readonly, nonatomic) UILabel *eastHourLabel;
@property (readonly, nonatomic) UILabel *westHourLabel;
@property (readonly, nonatomic) UILabel *southHourLabel;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NTKWorldClockRichComplicationHandsBaseView *handsView;
@property (readonly, nonatomic) NTKRichComplicationDialView *dialView;
@property (readonly, nonatomic) struct { double cityNameFontSize; double cityNameBaselineOffsetNorthSide; double cityNameBaselineOffsetSouthSide; double hourFontSize; double hourInset; double dialDiameter; struct CGSize { double width; double height; } majorTickSize; struct CGSize { double width; double height; } minorTickSize; } layoutConstants;
@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken;
@property (nonatomic) BOOL positionLabelNorthSide;
@property (nonatomic) BOOL useDayTimeColoring;
@property (retain, nonatomic) CLKUIAlmanacTransitInfo *transitInfo;
@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeSecondHandColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *daytimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *daytimeHandsSmallTickColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeSecondHandColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeHandsLargeTickColor;
@property (retain, nonatomic) UIColor *nighttimeHandsSmallTickColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; struct CGSize { double x0; double x1; } x6; struct CGSize { double x0; double x1; } x7; })_layoutConstantsForDevice:(id)a0;
+ (id)_createHandsViewForDevice:(id)a0;
+ (id)northLabelNumber;
+ (id)eastLabelNumber;
+ (id)southLabelNumber;
+ (id)westLabelNumber;
+ (BOOL)_shouldUseDaytimeColoringForTransitInfo:(id)a0 atDate:(id)a1;

- (void)layoutSubviews;
- (void)_updateUI;
- (void).cxx_destruct;
- (void)_updateColors;
- (void)dealloc;
- (void)applyConfiguration:(id)a0 animated:(BOOL)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)_hourLabels;
- (id)initWithDevice:(id)a0 smallTickCount:(unsigned long long)a1;
- (void)_updateDayTimeColoring;
- (BOOL)_updateLabelAndDial;

@end
