@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (BOOL)isColumn;
- (int)overlap;
- (void)setOverlap:(int)a0;
- (BOOL)isHorizontal;
- (void)setColumn:(BOOL)a0;
- (id)initWithChart:(id)a0;
- (void)setGapWidth:(int)a0;
- (int)gapWidth;
- (int)defaultLabelPosition;

@end
