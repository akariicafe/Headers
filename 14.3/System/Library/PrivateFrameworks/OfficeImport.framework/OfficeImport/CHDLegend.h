@class EDResources, EDCollection, OADGraphicProperties, NSArray;

@interface CHDLegend : NSObject {
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    BOOL mIsVertical;
    BOOL mIsOverlay;
    NSArray *mLabelEffects;
}

- (id)font;
- (void)setFontIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isOverlay;
- (id)initWithResources:(id)a0;
- (void)setIsOverlay:(BOOL)a0;
- (void)setFont:(id)a0;
- (id)description;
- (unsigned long long)fontIndex;
- (id)graphicProperties;
- (int)legendPosition;
- (void)setLabelEffects:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setLegendPosition:(int)a0;
- (void)setIsSingleColumnLegend:(BOOL)a0;
- (id)labelEffects;
- (id)legendEntries;
- (BOOL)isSingleColumnLegend;
- (BOOL)isAutoSizeAndPosition;

@end
