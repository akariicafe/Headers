@class CHDDefaultTextProperties, NSString, OADGraphicProperties, CHDPlotArea, OADThemeOverrides, CHDTitle, EDWorkbook, NSMutableArray, CHDLegend, EDSheet, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
    EDSheet *mSheet;
    int mStyleId;
    BOOL mAutoTitleDeleted;
    BOOL mPlotVisibleCellsOnly;
    BOOL mMSGraph;
    BOOL mHasSharedXValues;
    BOOL mDirectionChanged;
    BOOL mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLogicalBounds;
    NSMutableArray *mDrawables;
    OADThemeOverrides *mThemeOverrides;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)binaryEffects:(BOOL)a0;

- (void)setDirection:(int)a0;
- (id)externalData;
- (id)init;
- (void)setExternalData:(id)a0;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)addChildren:(id)a0;
- (int)direction;
- (id)sheet;
- (id)processors;
- (BOOL)is3D;
- (BOOL)isPie;
- (id)children;
- (id)legend;
- (BOOL)isArea;
- (id)view3D;
- (void)setTitle:(id)a0;
- (BOOL)isBinary;
- (unsigned long long)childCount;
- (int)styleId;
- (id)childAtIndex:(unsigned long long)a0;
- (void)removeChild:(id)a0;
- (id)title;
- (id)defaultTextFont;
- (unsigned long long)categoryCount;
- (void)setStyleId:(int)a0;
- (id)styleMatrix;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })logicalBounds;
- (id)workbook;
- (id)mainType;
- (id)plotArea;
- (id)chartAreaGraphicProperties;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)replaceChild:(id)a0 with:(id)a1;
- (void)setSideWallGraphicProperties:(id)a0;
- (void)setBackWallGraphicProperties:(id)a0;
- (void)setFloorGraphicProperties:(id)a0;
- (void)setLegend:(id)a0;
- (void)setView3D:(id)a0;
- (void)setSheet:(id)a0;
- (unsigned long long)defaultFontIndex;
- (int)defaultLabelPosition;
- (id)defaultThemeFont;
- (BOOL)isAutoTitleDeleted;
- (BOOL)isPlotVisibleCellsOnly;
- (int)displayBlankAs;
- (id)backWallGraphicProperties;
- (id)sideWallGraphicProperties;
- (id)floorGraphicProperties;
- (id)themeOverrides;
- (id)defaultDataLabelFont;
- (id)defaultSeriesTitleFont;
- (id)defaultFontWithResources:(id)a0;
- (BOOL)supportsMarkers;
- (BOOL)isScatterOrBubble;
- (void)setMSGraph:(BOOL)a0;
- (BOOL)hasSharedXValues;
- (void)setHasSharedXValues:(BOOL)a0;
- (BOOL)isDirectionChanged;
- (unsigned long long)seriesCount;
- (id)defaultContentFormat;
- (BOOL)isMSGraph;
- (void)setVisibleSeriesNames:(BOOL)a0;
- (void)setDirectionChanged:(BOOL)a0;
- (BOOL)hasVisibleSeriesNames;
- (void)setThemeOverrides:(id)a0;
- (void)setChartAreaGraphicProperties:(id)a0;
- (void)setPlotArea:(id)a0;
- (void)setAutoTitleDeleted:(BOOL)a0;
- (void)setPlotVisibleCellsOnly:(BOOL)a0;
- (void)setDisplayBlankAs:(int)a0;
- (id)defaultTextProperties;
- (void)setDefaultTextProperties:(id)a0;

@end
