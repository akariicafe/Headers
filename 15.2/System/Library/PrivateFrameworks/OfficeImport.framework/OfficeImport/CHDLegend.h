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

- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)fontIndex;
- (void)setFontIndex:(unsigned long long)a0;
- (id)font;
- (void)setIsOverlay:(BOOL)a0;
- (BOOL)isOverlay;
- (id)graphicProperties;
- (void)setLabelEffects:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setLegendPosition:(int)a0;
- (void)setIsSingleColumnLegend:(BOOL)a0;
- (id)labelEffects;
- (int)legendPosition;
- (id)legendEntries;
- (BOOL)isSingleColumnLegend;
- (BOOL)isAutoSizeAndPosition;

@end
