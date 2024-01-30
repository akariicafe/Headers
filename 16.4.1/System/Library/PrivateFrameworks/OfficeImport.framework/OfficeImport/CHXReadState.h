@class EXOfficeArtState, EDResources, CHDChart, OCPPackagePart, CHDChartType, CHDSeries, OADParagraphProperties;
@protocol CHAutoStyling;

@interface CHXReadState : NSObject {
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    id<CHAutoStyling> mAutoStyling;
}

@property (nonatomic) BOOL ignoreFormulas;

- (void)setResources:(id)a0;
- (id)resources;
- (void).cxx_destruct;
- (id)currentSeries;
- (void)setCurrentSeries:(id)a0;
- (id)defaultTextProperties;
- (id)chart;
- (id)exState;
- (id)autoStyling;
- (id)chartPart;
- (id)currentChartType;
- (id)drawingState;
- (id)initWithDrawingState:(id)a0;
- (void)popDefaultTextProperties;
- (void)popTitleTextProperties;
- (void)pushDefaultTextProperties:(id)a0;
- (void)pushTitleTextProperties:(BOOL)a0;
- (void)setChart:(id)a0;
- (void)setChartPart:(id)a0;
- (void)setCurrentChartType:(id)a0;
- (void)setDefaultTextProperties:(id)a0;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)a0;

@end
