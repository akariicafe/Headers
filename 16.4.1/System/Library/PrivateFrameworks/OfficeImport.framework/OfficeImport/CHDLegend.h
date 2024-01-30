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

- (void)setFontIndex:(unsigned long long)a0;
- (id)font;
- (void)setFont:(id)a0;
- (unsigned long long)fontIndex;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)setIsOverlay:(BOOL)a0;
- (id)initWithResources:(id)a0;
- (id)graphicProperties;
- (BOOL)isAutoSizeAndPosition;
- (BOOL)isSingleColumnLegend;
- (id)labelEffects;
- (id)legendEntries;
- (int)legendPosition;
- (void)setGraphicProperties:(id)a0;
- (void)setIsSingleColumnLegend:(BOOL)a0;
- (void)setLabelEffects:(id)a0;
- (void)setLegendPosition:(int)a0;

@end
